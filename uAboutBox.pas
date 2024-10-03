Unit uAboutBox;

interface

uses System, System.Drawing, System.Windows.Forms, System.Diagnostics;

type
  TAboutBox = class(Form)
    groupBox1: GroupBox;
    dgvModules: ListView;
    chType, chName, chVersion, chCopyright: ColumnHeader;
    button1: Button;
    linkLabel1, linkLabel2, linkLabel3, linkLabel4: LinkLabel;
    lVersion, label12, label9, lVersionText, label1, label4, label5, label2, label3, label6, label13: &Label;
    tableLayoutPanel1: TableLayoutPanel;
    flowLayoutPanel1, flowLayoutPanel2, flowLayoutPanel3, flowLayoutPanel4: FlowLayoutPanel;
    groupBox2: GroupBox;  
    
    procedure AboutBox_Load(sender: Object; e: EventArgs);
    procedure AboutBox_Shown(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure groupBox1_Enter(sender: Object; e: EventArgs);    
    procedure linkLabel1_LinkClicked(sender: Object;  e: LinkLabelLinkClickedEventArgs);
    procedure linkLabel2_LinkClicked(sender: Object;  e: LinkLabelLinkClickedEventArgs);
    procedure linkLabel3_LinkClicked(sender: Object;  e: LinkLabelLinkClickedEventArgs);
    procedure linkLabel4_LinkClicked(sender: Object;  e: LinkLabelLinkClickedEventArgs);
  {$region FormDesigner}
  internal
    {$resource uAboutBox.TAboutBox.resources}
    {$include uAboutBox.TAboutBox.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
{  // 여기에  uAboutBox.TAboutBox.inc 의 procedure InitializeComponent; 프로시저 옮겨서 디버깅 
   //  ..한쪽은 주석으로 막아야 중복 선언 오류 피할 수 있음

}
  end;

implementation

// MakeItem 함수 정의 (ListViewItem을 생성)
function MakeItem(item1, item2, item3, item4: string): ListViewItem;
var
  listItem: ListViewItem;
begin
  // ListViewItem 생성
  listItem := new ListViewItem(item1);  // 첫 번째 항목 설정
  listItem.SubItems.Add(item2);         // 두 번째 항목 추가
  listItem.SubItems.Add(item3);         // 세 번째 항목 추가
  listItem.SubItems.Add(item4);         // 네 번째 항목 추가
  Result := listItem;
end;

function AssemblyCopyright(a: System.Reflection.Assembly): string;
var
  attributes: array of object;
begin
  // 어셈블리에서 AssemblyCopyrightAttribute 특성 가져오기
  attributes := a.GetCustomAttributes(typeof(System.Reflection.AssemblyCopyrightAttribute), False);
  
  // Copyright 특성이 없으면 빈 문자열 반환
  if Length(attributes) = 0 then
    Result := ''
  else
    // Copyright 특성이 있으면 그 값을 반환
    Result := (System.Reflection.AssemblyCopyrightAttribute(attributes[0])).Copyright;
end;


function MakeItemA(a: System.Reflection.Assembly): ListViewItem;
begin
  Result := MakeItem('Assembly', 
                      System.IO.Path.GetFileName(a.ManifestModule.FullyQualifiedName), 
                      a.GetName().Version.ToString(), 
                      AssemblyCopyright(a));
end;


procedure TAboutBox.AboutBox_Shown(sender: Object; e: EventArgs);
var
  s0, s1, s2 : string;
  appPath: string;
  dllPath: string;
  assembly: System.Reflection.Assembly;  
  
begin
  s0 := '3.10';
  s1 := '3547';
  s2 := '2024-09-25';
  lVersion.Text := Format('{0}, сборка {1} ({2})', s0, s1, s2);//'3.10, сборка 3547 (2024-09-25)';
  //lVersion.Text = string.Format("{0}, сборка {1} ({2})", PascalABCCompiler.Compiler.ShortVersion, RevisionClass.Revision, PascalABCCompiler.Compiler.VersionDateTime.ToShortDateString());
  dgvModules.Items.Clear();

  // ListView 항목 추가
  dgvModules.Items.Add(MakeItem('Core', 'PascalABCCompiler.Core', '3.10.0.3543', 'Copyright © 2005-2024 by Ivan Bondarev, Stanislav Mikhalkovich'));  
  dgvModules.Items.Add(MakeItem('Language', 'PascalABC.NET', '1.2', 'Copyright ⓒ 2005-2024 by Ivan Bondarev, Stanislav Mikhalkovich'));  
  dgvModules.Items.Add(MakeItem('Converter', 'Optimizer', '1.0', 'Copyright ⓒ 2005-2024 by Ivan Bondarev, Stanislav Mikhalkovich'));  
  dgvModules.Items.Add(MakeItem('Plugin', 'Code Templates Plugin', '0.1', 'Copyright ⓒ 2019 by Stanislav Mikhalkovich'));  
  dgvModules.Items.Add(MakeItem('Plugin', 'InternalError Report Genegator', '1.2', 'Copyright ⓒ 2005-2024 by Ivan Bondarev, Stanislav Mikhalkovich'));  
  dgvModules.Items.Add(MakeItem('Plugin', 'PT4 Provider', '1.1', 'Copyright ⓒ 2005-2024 by Ivan Bondarev, Stanislav Mikhalkovich'));  
  dgvModules.Items.Add(MakeItem('Plugin', 'Teacher Control Plugin', '0.1', 'Copyright ⓒ 2021-2024 by Stanislav Mikhalkovich'));  

  
  // 경로 조합
  appPath := GetCurrentDir; // 또는 특정 경로 지정

  try
    
    dllPath := System.IO.Path.Combine(appPath, 'ICSharpCode.TextEditor.dll');
    // DLL 로드
    assembly := System.Reflection.Assembly.LoadFile(dllPath);
    writeln('DLL 로드 성공: ', assembly.FullName);
    dgvModules.Items.Add(MakeItemA(assembly));  
    //dgvModules.Items.Add(MakeItem('Assembly', 'ICSharpCode.TextEditor.dll', '0.0.0.0', ''));  
    //dgvModules.Items.Add(MakeItem(Assembly.LoadFile(Path.Combine(apppatch,"ICSharpCode.TextEditor.dll"))));
    
    dllPath := System.IO.Path.Combine(appPath, 'Debugger.Core.dll');
    // DLL 로드
    assembly := System.Reflection.Assembly.LoadFile(dllPath);
    writeln('DLL 로드 성공: ', assembly.FullName);
    dgvModules.Items.Add(MakeItemA(assembly));  
    //  dgvModules.Items.Add(MakeItem('Assembly', 'Debugger.Core.dll', '3.0.0.2649', '2000-2007 AlphaSierraPapa'));  
    //dgvModules.Items.Add(MakeItem(Assembly.LoadFile(Path.Combine(apppatch,"Debugger.Core.dll"))));

    dllPath := System.IO.Path.Combine(appPath, 'WeifenLuo.WinFormsUI.Docking.dll');
    // DLL 로드
    assembly := System.Reflection.Assembly.LoadFile(dllPath);
    writeln('DLL 로드 성공: ', assembly.FullName);
    dgvModules.Items.Add(MakeItemA(assembly));  
    // dgvModules.Items.Add(MakeItem('Assembly', 'WeifenLuo.WinFormsUI.Docking.dll', '2.2.7423.21162', 'Copyright ⓒ Weifen Luo 2007'));  
    //dgvModules.Items.Add(MakeItem(Assembly.LoadFile(Path.Combine(apppatch,"WeifenLuo.WinFormsUI.Docking.dll"))));

  except
      writeln('DLL 파일을 찾을 수 없습니다');
    end;  
    ActiveControl := button1;
  
  
end;

procedure TAboutBox.AboutBox_Load(sender: Object; e: EventArgs);
begin
  self.Text := 'About PascalABC.NET';  // 현재 폼의 Text 속성 설정
  self.Height := 345 + 10;//345 + 14;
  self.Width := 546 + 94 - 15 - 10;//546 + 15 + 94;
  self.ShowIcon := false; // 폼 아이콘 안보이게 설정
  self.MaximizeBox := false;
  self.MinimizeBox := false;
  
  
end;

procedure TAboutBox.groupBox1_Enter(sender: Object; e: EventArgs);
begin
  // 여기에 필요한 코드 작성
end;

procedure TAboutBox.linkLabel1_LinkClicked(sender: Object;  e: LinkLabelLinkClickedEventArgs);
var
  url: string;
begin
  url := 'https://pascalabc.net/';//PascalABCCompiler.StringResources.Get('!PASCALABCNET_SITE_LINK');
  Process.Start(url);
end;

procedure TAboutBox.linkLabel2_LinkClicked(sender: Object;  e: LinkLabelLinkClickedEventArgs);
var
  url: string;
begin
  url := 'https://forum.mmcs.sfedu.ru/c/pascalabcnet/';//PascalABCCompiler.StringResources.Get("!PASCALABCNET_FORUM_LINK");
  Process.Start(url);
end;

procedure TAboutBox.linkLabel3_LinkClicked(sender: Object;  e: LinkLabelLinkClickedEventArgs);
var
  url: string;
begin
  url := 'https://pascalabc.net/razrabotchiki-pascalabc-net/';//PascalABCCompiler.StringResources.Get("!PASCALABCNET_DEVELOPERS_LINK");
  Process.Start(url);
end;

procedure TAboutBox.linkLabel4_LinkClicked(sender: Object;  e: LinkLabelLinkClickedEventArgs);
var
  url: string;
begin
  url := 'https://t.me/pascalabc_official/';//PascalABCCompiler.StringResources.Get("!PASCALABCNET_TELEGRAM_CHANNEL_LINK");
  Process.Start(url);
end;
procedure TAboutBox.button1_Click(sender: Object; e: EventArgs);
begin
  self.Close; // 폼닫기 명령어
end;

end.


{
//위치 : bin\Lng\Eng\Global_loc.dat 파일

!PASCALABCNET_FORUM=PascalABC.NET Forum
!PASCALABCNET_TELEGRAM=PascalABC.NET Telegram Channel
!PASCALABCNET_SITE=PascalABC.NET Site
!PASCALABCNET_DEVELOPERS=Developers
!DEVELOPERS=Lead Developer:
!OK=OK
!CANCEL=Cancel
!YES=Yes
!NO=No
!ALL=All
!CONFIRM=Confirm
!ERROR=Error
!FILE_NOT_FOUND(Left brace)0(Right brace)=File "(Left brace)0(Right brace)" not found.
!WARNING=Warning
!ERROR_ON_CREATE_DIRECTORY=Error when creating directory
}

{
Core        | PascalABCCompiler.Core | 3.10.0.3543 | Copyright ⓒ 2005-2024 by Ivan Bondarev, Stanislav Mikhalkovich
Language | PascalABC.NET              | 1.2            | Copyright ⓒ 2005-2024 by Ivan Bondarev, Stanislav Mikhalkovich
Converter | Optimizer                     | 1.0            | Copyright ⓒ 2005-2024 by Ivan Bondarev, Stanislav Mikhalkovich
Plugin | Code Templates Plugin       | 0.1            | Copyright ⓒ 2019 by Stanislav Mikhalkovich
Plugin | InternalError Report Genegator                     | 1.2            | Copyright ⓒ 2005-2024 by Ivan Bondarev, Stanislav Mikhalkovich
Plugin | PT4 Provider                     | 1.1            | Copyright ⓒ 2005-2024 by Ivan Bondarev, Stanislav Mikhalkovich
Plugin | Teacher Control Plugin                     | 0.1            | Copyright ⓒ 2021-2024 by Stanislav Mikhalkovich
Assembly | ICSharpCode.TextEditor.dll                     | 0.0.0.0            | 
Assembly | Debugger.Core.dll                     | 3.0.0.2649            | 2000-2007 AlphaSierraPapa
Assembly | WeifenLuo.WinFormsUI.Docking.dll                     | 2.2.7423.21162            | Copyright ⓒ Weifen Luo 2007
}