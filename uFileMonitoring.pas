unit uFileMonitoring;

interface
uses System;
type
  FileChangeWatcher = class(IDisposable)
  private
    watcher: System.IO.FileSystemWatcher;
    fileName: string;
    activeWatchers: Dictionary<FileChangeWatcher, FileChangeWatcher>;
    wasChangedExternally: boolean;
    FEnabled: boolean;
    
    procedure SetEnabled(Value: boolean); // SetEnabled 메서드 선언
    
    procedure SetWatcher;
    procedure OnFileChangedEvent(sender: object; e: System.IO.FileSystemEventArgs);
    //procedure showChangedFileMessage; //2024.10.06 일단주석 나중에 수정예정
    //procedure MainForm_Activated(sender: object; e: EventArgs); //2024.10.06 일단주석 나중에 수정예정
    
  public
    constructor Create(path: string);
    procedure Dispose;
    property Enabled: boolean read FEnabled write SetEnabled;
    
  end;

implementation

constructor FileChangeWatcher.Create(path: string);
begin
  //VisualPABCSingleton.MainForm.Activated += MainForm_Activated;  // 2024.10.06 주석 처리 나중에 수정예정
  fileName := path;
  activeWatchers := new Dictionary<FileChangeWatcher, FileChangeWatcher>;
  activeWatchers.Add(self, self);
  FEnabled := true;
  SetWatcher;
end;

procedure FileChangeWatcher.Dispose;
begin
  activeWatchers.Remove(self);
  //VisualPABCSingleton.MainForm.Activated -= MainForm_Activated; //2024.10.06 일단주석
  if watcher <> nil then
  begin
    watcher.Dispose;
    watcher := nil;
  end;
end;

procedure FileChangeWatcher.SetEnabled(value: boolean);
begin
  FEnabled := value;
  SetWatcher;
end;

procedure FileChangeWatcher.SetWatcher;
begin
  if watcher <> nil then
    watcher.EnableRaisingEvents := false;

  if not FEnabled then
    exit;
    
  try
    if watcher = nil then
    begin
      watcher := new System.IO.FileSystemWatcher;
      //watcher.SynchronizingObject := VisualPABCSingleton.MainForm; // 2024.10.06 일단주석 처리
      watcher.Changed += OnFileChangedEvent;
      watcher.Created += OnFileChangedEvent;
      //watcher.Renamed += OnFileChangedEvent; // 2024.10.06 일단 주석 처리
    end;
    watcher.Path := System.IO.Path.GetDirectoryName(fileName);
    watcher.Filter := System.IO.Path.GetFileName(fileName);
    watcher.EnableRaisingEvents := true;
  except
    on E: PlatformNotSupportedException do
    begin
      if watcher <> nil then
        watcher.Dispose;
      watcher := nil;
    end;
  end;
end;

procedure FileChangeWatcher.OnFileChangedEvent(sender: object; e: System.IO.FileSystemEventArgs);
begin
  if not wasChangedExternally then
    wasChangedExternally := true;
end;

{ // 2024.10.06 일단 주석 나중에 수정예정
procedure FileChangeWatcher.showChangedFileMessage;
var
  mes: string;
begin
  
  if not System.IO.File.Exists(fileName) then
  begin
    mes := Form1StringResources.Get('FILE_NOT_EXIST_MESSAGE');
    if MessageBox.Show(fileName + #10#10 + mes, Form1StringResources.Get('CHANGED_FILE'), 
                       MessageBoxButtons.YesNo, MessageBoxIcon.Question) = DialogResult.Yes then
      WorkbenchServiceFactory.FileService.SetFileAsChanged(fileName)
    else
      WorkbenchServiceFactory.FileService.CloseFile(fileName);
    exit;
  end;

  mes := Form1StringResources.Get('FILE_CHANGED_MESSAGE');
  if MessageBox.Show(fileName + #10#10 + mes, Form1StringResources.Get('CHANGED_FILE'), 
                     MessageBoxButtons.YesNo, MessageBoxIcon.Question) = DialogResult.Yes then
    WorkbenchServiceFactory.FileService.ReloadFile(fileName)
  else
    WorkbenchServiceFactory.FileService.SetFileAsChanged(fileName);
end;

procedure FileChangeWatcher.MainForm_Activated(sender: object; e: EventArgs);
begin
  try
    if wasChangedExternally then
    begin
      wasChangedExternally := false;
      WorkbenchServiceFactory.Workbench.MainForm.BeginInvoke(showChangedFileMessage);
    end;
  except
    // 예외 처리
  end;
end;
}
end.