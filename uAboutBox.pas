Unit uAboutBox;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  TAboutBox = class(Form)
    procedure About_Load(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource uAboutBox.TAboutBox.resources}
    button1: Button;
    listView1: ListView;
    groupBox2: GroupBox;
    groupBox1: GroupBox;
    {$include uAboutBox.TAboutBox.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
   
  end;

implementation

var
  dgvModules: ListView;
  chType, chName, chVersion, chCopyright: ColumnHeader;


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

procedure TAboutBox.About_Load(sender: Object; e: EventArgs);
begin
  self.Text := 'About PascalABC.NET';  // 현재 폼의 Text 속성 설정
  self.Height := 345 + 14;
  self.Width := 546 + 15 + 94;
  self.ShowIcon := false; // 폼 아이콘 안보이게 설정
  self.MaximizeBox := false;
  self.MinimizeBox := false;
  
  groupBox1.Left := 8;
  groupBox1.Top := 160 - 10;
  groupBox1.Width := 530 + 50 + 40;
  groupBox1.Height := 137 - 10;
  groupBox1.Text := 'Components';
 

  button1.Top := groupBox1.Top + groupBox1.Height + 10;
  button1.Left := 308 - 50;
  
  button1.Width := 107;
  button1.Height := 23;
  button1.Text := 'OK';
  button1.UseVisualStyleBackColor := true;
  
  dgvModules := listview1;
  dgvModules.AllowColumnReorder := true;    // 컬럼 재정렬 허용
  dgvModules.AutoArrange := false;          // 자동 정렬 비활성화
  dgvModules.FullRowSelect := true;         // 전체 행 선택
  dgvModules.GridLines := true;             // 그리드 라인 표시
  dgvModules.HeaderStyle := ColumnHeaderStyle.Nonclickable; // 헤더 클릭 비활성화
  dgvModules.HideSelection := false;        // 선택 해제 시에도 선택 상태 유지
  dgvModules.MultiSelect := false;          // 다중 선택 비활성화
  dgvModules.Dock := DockStyle.Fill;        // ListView를 전체 화면에 맞춤
  dgvModules.View := View.Details;          // Details 뷰로 설정
  // 컬럼 헤더 생성
  chType := new ColumnHeader;
  chType.Text := 'Type';
  chType.Width := 65; //100;

  chName := new ColumnHeader;
  chName.Text := 'Name';
  chName.Width := 170; //150;

  chVersion := new ColumnHeader;
  chVersion.Text := 'Version';
  chVersion.Width := 74; //100;

  chCopyright := new ColumnHeader;
  chCopyright.Text := 'Copyright';
  chCopyright.Width := 200; //150;

  // 컬럼 헤더 추가
  //dgvModules.Columns.AddRange([chType, chName, chVersion, chCopyright]); //오류발생
  // 컬럼 헤더 개별적으로 추가
  dgvModules.Columns.Add(chType);
  dgvModules.Columns.Add(chName);
  dgvModules.Columns.Add(chVersion);
  dgvModules.Columns.Add(chCopyright);  
  
  // ListView 항목 추가
  dgvModules.Items.Add(MakeItem('Core', 'PascalABCCompiler.Core', '3.10.0.3543', 'Copyright © 2005-2024 by Ivan Bondarev, Stanislav Mikhalkovich'));  
  dgvModules.Items.Add(MakeItem('Language', 'PascalABC.NET', '1.2', 'Copyright ⓒ 2005-2024 by Ivan Bondarev, Stanislav Mikhalkovich'));  
  dgvModules.Items.Add(MakeItem('Converter', 'Optimizer', '1.0', 'Copyright ⓒ 2005-2024 by Ivan Bondarev, Stanislav Mikhalkovich'));  
  dgvModules.Items.Add(MakeItem('Plugin', 'Code Templates Plugin', '0.1', 'Copyright ⓒ 2019 by Stanislav Mikhalkovich'));  
  dgvModules.Items.Add(MakeItem('Plugin', 'InternalError Report Genegator', '1.2', 'Copyright ⓒ 2005-2024 by Ivan Bondarev, Stanislav Mikhalkovich'));  
  dgvModules.Items.Add(MakeItem('Plugin', 'PT4 Provider', '1.1', 'Copyright ⓒ 2005-2024 by Ivan Bondarev, Stanislav Mikhalkovich'));  
  dgvModules.Items.Add(MakeItem('Plugin', 'Teacher Control Plugin', '0.1', 'Copyright ⓒ 2021-2024 by Stanislav Mikhalkovich'));  
  dgvModules.Items.Add(MakeItem('Assembly', 'ICSharpCode.TextEditor.dll', '0.0.0.0', ''));  
  dgvModules.Items.Add(MakeItem('Assembly', 'Debugger.Core.dll', '3.0.0.2649', '2000-2007 AlphaSierraPapa'));  
  dgvModules.Items.Add(MakeItem('Assembly', 'WeifenLuo.WinFormsUI.Docking.dll', '2.2.7423.21162', 'Copyright ⓒ Weifen Luo 2007'));  
  
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