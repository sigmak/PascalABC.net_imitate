unit uFSWatcherService;

interface

uses uFileMonitoring; 

{
type
  FileChangeWatcher = class
  private
    FEnabled: boolean;
  public
    constructor Create(FileName: string);
    procedure Dispose;
    property Enabled: boolean read FEnabled write FEnabled;
  end;
//---------------------------------------  
}
type
  FSWatcherService = class
  private
    watchers: Dictionary<string, FileChangeWatcher>;
  
  public
    constructor Create;
    procedure AddWatcher(FileName: string);
    procedure DisableWatcher(FileName: string);
    procedure EnableWatcher(FileName: string);
    procedure RemoveWatcher(FileName: string);
  end;

implementation
{
constructor FileChangeWatcher.Create(FileName: string);
begin
  // 컴파일 에러 때문에 일단 작성, 차후 수정예정
end;
procedure FileChangeWatcher.Dispose;
begin
  // 컴파일 에러 때문에 일단 작성, 차후 수정예정
end;
}
//---------------------------------------
constructor FSWatcherService.Create;
begin
  watchers := new Dictionary<string, FileChangeWatcher>;
end;

procedure FSWatcherService.AddWatcher(FileName: string);
var
  s: string;
begin
  try
    s := FileName.ToLower;
    if not watchers.ContainsKey(s) then
      watchers[s] := new FileChangeWatcher(FileName);
  except
    // 예외 처리
  end;
end;

procedure FSWatcherService.DisableWatcher(FileName: string);
var
  s: string;
  fcw: FileChangeWatcher;
begin
  s := FileName.ToLower;
  if watchers.TryGetValue(s, fcw) then
    fcw.Enabled := false;
end;

procedure FSWatcherService.EnableWatcher(FileName: string);
var
  s: string;
  fcw: FileChangeWatcher;
begin
  s := FileName.ToLower;
  if watchers.TryGetValue(s, fcw) then
    fcw.Enabled := true;
end;

procedure FSWatcherService.RemoveWatcher(FileName: string);
var
  s: string;
  fcw: FileChangeWatcher;
begin
  try
    s := FileName.ToLower;
    if watchers.TryGetValue(s, fcw) then
    begin
      fcw.Dispose;
      watchers.Remove(s);
    end;
  except
    // 예외 처리
  end;
end;
end.