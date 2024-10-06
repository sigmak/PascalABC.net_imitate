Unit uMain;

interface

uses System, System.Drawing, System.Windows.Forms,
     WeifenLuo.WinFormsUI.Docking,
     fChild, uAboutBox, 
     uVisualStates, uRunProcessOptions, uFSWatcherService, uFileMonitoring;

type
  Form1 = class(Form)
    formChild1, formChild2, formChild3, formChild4, formChild5, formChild6, formChild7, formChild8: FormChild;
    dockPanelMain: DockPanel;
    procedure InitializeMyComponent;
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure exitToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure editToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure TabControl_SelectedIndexChanged(sender: Object; e: EventArgs);
    procedure Form1_SizeChanged(sender: Object; e: EventArgs);
    procedure aboutToolStripMenuItem_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource uMain.Form1.resources}
    menuStrip1: MenuStrip;
    fileToolStripMenuItem: ToolStripMenuItem;
    newToolStripMenuItem: ToolStripMenuItem;
    newProjectToolStripMenuItem: ToolStripMenuItem;
    toolStripMenuItem1: ToolStripSeparator;
    openToolStripMenuItem: ToolStripMenuItem;
    openProjectToolStripMenuItem: ToolStripMenuItem;
    saveToolStripMenuItem: ToolStripMenuItem;
    saveAsToolStripMenuItem: ToolStripMenuItem;
    saveAllToolStripMenuItem: ToolStripMenuItem;
    toolStripMenuItem3: ToolStripSeparator;
    closeToolStripMenuItem: ToolStripMenuItem;
    closeProjectToolStripMenuItem: ToolStripMenuItem;
    closeAllButThisToolStripMenuItem: ToolStripMenuItem;
    toolStripMenuItem4: ToolStripSeparator;
    printToolStripMenuItem: ToolStripMenuItem;
    toolStripMenuItem5: ToolStripSeparator;
    recentFilesToolStripMenuItem: ToolStripMenuItem;
    recentProjectsToolStripMenuItem: ToolStripMenuItem;
    exitToolStripMenuItem: ToolStripMenuItem;
    editToolStripMenuItem: ToolStripMenuItem;
    undoToolStripMenuItem: ToolStripMenuItem;
    redoToolStripMenuItem: ToolStripMenuItem;
    toolStripMenuItem6: ToolStripSeparator;
    cutToolStripMenuItem: ToolStripMenuItem;
    copyToolStripMenuItem: ToolStripMenuItem;
    pasteToolStripMenuItem: ToolStripMenuItem;
    deleteToolStripMenuItem: ToolStripMenuItem;
    toolStripMenuItem7: ToolStripSeparator;
    findToolStripMenuItem: ToolStripMenuItem;
    findNextToolStripMenuItem: ToolStripMenuItem;
    replaceToolStripMenuItem: ToolStripMenuItem;
    gotoLineToolStripMenuItem: ToolStripMenuItem;
    toolStripMenuItem8: ToolStripSeparator;
    selectAllToolStripMenuItem: ToolStripMenuItem;
    toolStripMenuItem9: ToolStripSeparator;
    bookMarkToolStripMenuItem: ToolStripMenuItem;
    toglleBookmarkToolStripMenuItem: ToolStripMenuItem;
    nextBookmarkToolStripMenuItem: ToolStripMenuItem;
    previousBookmarkToolStripMenuItem: ToolStripMenuItem;
    clearAllBookmarksToolStripMenuItem: ToolStripMenuItem;
    viewToolStripMenuItem: ToolStripMenuItem;
    clearOutputToolStripMenuItem: ToolStripMenuItem;
    toolStripMenuItem10: ToolStripSeparator;
    bottomPanelToolStripMenuItem: ToolStripMenuItem;
    outputWindowToolStripMenuItem: ToolStripMenuItem;
    errorListToolStripMenuItem: ToolStripMenuItem;
    compilerMessengersToolStripMenuItem: ToolStripMenuItem;
    searchResutlsToolStripMenuItem: ToolStripMenuItem;
    localVariableToolStripMenuItem: ToolStripMenuItem;
    watchListToolStripMenuItem: ToolStripMenuItem;
    toolStripMenuItem11: ToolStripSeparator;
    quickClassBrowserToolStripMenuItem: ToolStripMenuItem;
    projectExplorerToolStripMenuItem: ToolStripMenuItem;
    toolBoxToolStripMenuItem: ToolStripMenuItem;
    propertiesToolStripMenuItem: ToolStripMenuItem;
    toolStripMenuItem12: ToolStripSeparator;
    navigateBackwardsToolStripMenuItem: ToolStripMenuItem;
    navigateToolStripMenuItem: ToolStripMenuItem;
    projectToolStripMenuItem: ToolStripMenuItem;
    addNewFileToolStripMenuItem: ToolStripMenuItem;
    addExsitingFileToolStripMenuItem: ToolStripMenuItem;
    addFormToolStripMenuItem: ToolStripMenuItem;
    toolStripMenuItem13: ToolStripSeparator;
    addReferenceToolStripMenuItem: ToolStripMenuItem;
    propertiesToolStripMenuItem1: ToolStripMenuItem;
    programToolStripMenuItem: ToolStripMenuItem;
    runToolStripMenuItem: ToolStripMenuItem;
    runWithoutIDEToolStripMenuItem: ToolStripMenuItem;
    commandLineArgumentsToolStripMenuItem: ToolStripMenuItem;
    stopToolStripMenuItem: ToolStripMenuItem;
    toolStripMenuItem14: ToolStripSeparator;
    buildToolStripMenuItem: ToolStripMenuItem;
    rebuildToolStripMenuItem: ToolStripMenuItem;
    toolStripMenuItem15: ToolStripSeparator;
    stepOverToolStripMenuItem: ToolStripMenuItem;
    stepInToolStripMenuItem: ToolStripMenuItem;
    stepOutToolStripMenuItem: ToolStripMenuItem;
    runToCursorToolStripMenuItem: ToolStripMenuItem;
    designerToolStripMenuItem: ToolStripMenuItem;
    alignToolStripMenuItem: ToolStripMenuItem;
    leftsToolStripMenuItem: ToolStripMenuItem;
    rightsToolStripMenuItem: ToolStripMenuItem;
    topsToolStripMenuItem: ToolStripMenuItem;
    bottomsToolStripMenuItem: ToolStripMenuItem;
    horizontalCentersToolStripMenuItem: ToolStripMenuItem;
    verticalCentersToolStripMenuItem: ToolStripMenuItem;
    toGridToolStripMenuItem: ToolStripMenuItem;
    centerToolStripMenuItem: ToolStripMenuItem;
    horizontallyToolStripMenuItem: ToolStripMenuItem;
    verticallyToolStripMenuItem: ToolStripMenuItem;
    sizeToToolStripMenuItem: ToolStripMenuItem;
    controlToolStripMenuItem: ToolStripMenuItem;
    controlWidthToolStripMenuItem: ToolStripMenuItem;
    controlHeightToolStripMenuItem: ToolStripMenuItem;
    gridToolStripMenuItem: ToolStripMenuItem;
    zorderToolStripMenuItem: ToolStripMenuItem;
    bringToFrontToolStripMenuItem: ToolStripMenuItem;
    sendToBackToolStripMenuItem: ToolStripMenuItem;
    tabOrderToolStripMenuItem: ToolStripMenuItem;
    toolsToolStripMenuItem: ToolStripMenuItem;
    optionsToolStripMenuItem: ToolStripMenuItem;
    toolStripMenuItem16: ToolStripSeparator;
    codeAutocompleteModeToolStripMenuItem: ToolStripMenuItem;
    goToDeclrationToolStripMenuItem: ToolStripMenuItem;
    goToDefinitionToolStripMenuItem: ToolStripMenuItem;
    findReferencesToolStripMenuItem: ToolStripMenuItem;
    generateRealizationToolStripMenuItem: ToolStripMenuItem;
    formatCodeToolStripMenuItem: ToolStripMenuItem;
    runUnitsTestsToolStripMenuItem: ToolStripMenuItem;
    pluginsToolStripMenuItem: ToolStripMenuItem;
    codeTemplatesToolStripMenuItem: ToolStripMenuItem;
    reportABugToolStripMenuItem: ToolStripMenuItem;
    toolStripMenuItem17: ToolStripSeparator;
    viewTasksToolStripMenuItem: ToolStripMenuItem;
    createProgramTemplatesToolStripMenuItem: ToolStripMenuItem;
    viewResutlsToolStripMenuItem: ToolStripMenuItem;
    pT4SetupToolStripMenuItem: ToolStripMenuItem;
    helpToolStripMenuItem: ToolStripMenuItem;
    contentsToolStripMenuItem: ToolStripMenuItem;
    mainFeatureToolStripMenuItem: ToolStripMenuItem;
    samplesToolStripMenuItem: ToolStripMenuItem;
    learnPascalABCNETToolStripMenuItem: ToolStripMenuItem;
    toolStripMenuItem18: ToolStripSeparator;
    checkForUpdatesToolStripMenuItem: ToolStripMenuItem;
    aboutToolStripMenuItem: ToolStripMenuItem;
    toolStrip1: ToolStrip;
    toolStripMenuItem2: ToolStripSeparator;
    {$include uMain.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
      InitializeMyComponent;
    end;
  end;

implementation
var
  visualStates: VisualStates := new VisualStates(); // uVisualStates.pas 테스트용 코드임. 2024.10.06
  runProcessOptions : RunProcessOptions := new RunProcessOptions();// uRunProcessOptions.pas 테스트용 코드임. 2024.10.06
  fSWatcherService : FSWatcherService := new FSWatcherService(); // uFSWatcherService.pas 테스트용 코드임. 2024.10.06
  fileChangeWatcher : FileChangeWatcher := new FileChangeWatcher(''); // uFileMonitoring.pas 테스트용 코드임. 2024.10.06
procedure Form1.InitializeMyComponent;
begin
  formChild1 := new FormChild;
  formChild2 := new FormChild;
  formChild3 := new FormChild;
  formChild4 := new FormChild;
  formChild5 := new FormChild;
  formChild6 := new FormChild;
  formChild7 := new FormChild;
  formChild8 := new FormChild;
  
      // FormMain 컴포넌트 초기화 코드 작성
      dockPanelMain := new DockPanel;
      //dockPanelMain.Dock := DockStyle.Fill;
      dockPanelMain.Dock := DockStyle.Bottom;
      
      dockPanelMain.Height := self.ClientSize.Height - menuStrip1.Height - toolStrip1.Height;

      //dockPanelMain.Theme := new VS2015DarkTheme;
      dockPanelMain.Theme := new VS2005Theme; // 탭 모양은 이테마가 제일 좋음.
      //menuStrip1.Dock := DockStyle.Top;
     //self.Controls.Add(menuStrip1);
     //menuStrip1.Visible := false;
     
     self.Controls.Add(dockPanelMain);
 
      // FormMain의 이벤트 핸들러 설정
      //self.Load += new EventHandler(FormMain_Load);  
end;

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
var
  tabControl: TabControl;
  tabPage1, tabPage2: TabPage;
begin
  self.Text := 'PascalABC.NET 3.9_imitate';  // 현재 폼의 Text 속성 설정

  formChild1.Text := 'Project Explorer';
  formChild2.Text := 'Toolbox';
  formChild3.Text := 'FormChild 3';
  formChild4.Text := 'FormChild 4';
  formChild5.Text := 'Output Window';
  formChild6.Text := 'Error List';
  formChild7.Text := 'Compiler Messages';
  formChild8.Text := 'Properties';
  
  formChild1.Show(dockPanelMain, DockState.DockLeft);
  formChild2.Show(dockPanelMain, DockState.DockLeft);
  formChild3.Show(dockPanelMain);
  formChild4.Show(dockPanelMain);
  formChild5.Show(dockPanelMain, DockState.DockBottom);
  formChild6.Show(dockPanelMain, DockState.DockBottom);
  formChild7.Show(dockPanelMain, DockState.DockBottom);
  formChild8.Show(dockPanelMain, DockState.DockRight);


   //footerDockPanel.DockBottomPortion = 0.99;
   //formChild1.DockPanel.AllowEndUserNestedDocking :=true;
  //formChild1.SetBounds(0, menuStrip1.Height, self.ClientSize.Width , self.ClientSize.Height - menuStrip1.Height);
  

  formChild2.DockPanel.DockLeftPortion := 0.30;
  formChild2.DockTo(formChild1.Pane, DockStyle.Bottom, 0);  
  
  
  // formChild4에 TabControl 추가
  tabControl := new System.Windows.Forms.TabControl();
  tabControl.Dock := DockStyle.Fill;  
  // 탭 페이지 추가
  tabPage1 := new TabPage('Designer');
  tabPage2 := new TabPage('Code');
  
  tabControl.TabPages.Add(tabPage1);
  tabControl.TabPages.Add(tabPage2);
  
  // tabPage2를 클릭된 상태로 설정
  tabControl.SelectedTab := tabPage2;
  
  // TabControl의 SelectedIndexChanged 이벤트 핸들러 추가
  tabControl.SelectedIndexChanged += TabControl_SelectedIndexChanged;
  
  
  // formChild4에 TabControl 추가
  formChild4.Controls.Add(tabControl);  
  
  
  
      formChild1.ShowForm;
      formChild2.HideForm;
      formChild3.ShowForm;
      formChild4.ShowForm;
      formChild5.ShowForm;
      formChild6.ShowForm;
      formChild7.ShowForm;
      formChild8.HideForm;
    

end;

// TabControl 탭 클릭 이벤트 핸들러
procedure Form1.TabControl_SelectedIndexChanged(sender: Object; e: EventArgs);
begin
  var tabControl := TabControl(sender);
  //MessageBox.Show('Selected Tab: ' + tabControl.SelectedTab.Text);
  var selectedTabText := tabControl.SelectedTab.Text;
  
  // 탭 이름에 따른 조건 분기 (C#의 switch와 유사한 case 문)
  case selectedTabText of
    'Designer': 
    begin
      //MessageBox.Show('Tab 1 is selected');
      // Tab 1에 해당하는 작업 수행
      formChild1.ShowForm;
      formChild2.ShowForm;
      formChild3.ShowForm;
      formChild4.ShowForm;
      formChild5.HideForm;
      formChild6.HideForm;
      formChild7.HideForm;
      formChild8.ShowForm;
     
      {
  formChild1.Text := 'Project Explorer';
  formChild2.Text := 'Toolbox';
  formChild3.Text := 'FormChild 3';
  formChild4.Text := 'FormChild 4';
  formChild5.Text := 'Output Window';
  formChild6.Text := 'Error List';
  formChild7.Text := 'Compiler Messages';
  formChild8.Text := 'Properties';      
  }
         
      
    end;
    
    'Code': 
    begin
      //MessageBox.Show('Tab 2 is selected');
      // Tab 2에 해당하는 작업 수행
      formChild1.ShowForm;
      formChild2.HideForm;
      formChild3.ShowForm;
      formChild4.ShowForm;
      formChild5.ShowForm;
      formChild6.ShowForm;
      formChild7.ShowForm;
      formChild8.HideForm;
      
    end;
    
    else
    begin
      MessageBox.Show('Unknown Tab is selected');
      // 기타 작업 수행
    end;
  end;  
end;


procedure Form1.exitToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  Halt; //프로그램 종료
  //Application.Terminate; <- 이코드는 PascalABC.net에서는 지원안됨.
end;

procedure Form1.editToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.Form1_SizeChanged(sender: Object; e: EventArgs);
begin
  dockPanelMain.Height := self.ClientSize.Height - menuStrip1.Height - toolStrip1.Height;
end;

procedure Form1.aboutToolStripMenuItem_Click(sender: Object; e: EventArgs);
var 
  formAbout: TAboutBox;
begin
  //About 메뉴
  
  {// 이거는 델파이 코드임.
  formAbout := About.Create(Applicaton); 
  formAbout.ShowModal; 
  }
  formAbout := new TAboutBox;   // PascalABC.NET에서 new를 사용하여 폼 생성
  formAbout.StartPosition := FormStartPosition.CenterParent; //모달폼 호출전에 사용해야됨.
  formAbout.ShowDialog;          // ShowDialog는 모달로 폼을 띄움
  
  
  //ChildForm.StartPosition := FormStartPosition.CenterParent;  // 부모 폼 중앙에 위치
  //ChildForm.ShowDialog(MainForm);  // 부모 폼을 지정하여 모달 창으로 열기
end;

end.
