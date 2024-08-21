Unit uMain;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure exitToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure editToolStripMenuItem_Click(sender: Object; e: EventArgs);
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
    toolStripMenuItem2: ToolStripSeparator;
    {$include uMain.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
  self.Text := 'PascalABC.NET 3.9';  // 현재 폼의 Text 속성 설정
end;

procedure Form1.exitToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  Halt; //프로그램 종료
  //Application.Terminate; <- 이코드는 PascalABC.net에서는 지원안됨.
end;

procedure Form1.editToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  
end;

end.
