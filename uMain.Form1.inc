procedure InitializeComponent;
    begin
        self.menuStrip1 := new System.Windows.Forms.MenuStrip();
        self.fileToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.newToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.newProjectToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem1 := new System.Windows.Forms.ToolStripSeparator();
        self.openToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.openProjectToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem2 := new System.Windows.Forms.ToolStripSeparator();
        self.saveToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.saveAsToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.saveAllToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem3 := new System.Windows.Forms.ToolStripSeparator();
        self.closeToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.closeProjectToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.closeAllButThisToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem4 := new System.Windows.Forms.ToolStripSeparator();
        self.printToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem5 := new System.Windows.Forms.ToolStripSeparator();
        self.recentFilesToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.recentProjectsToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.exitToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.editToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.undoToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.redoToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem6 := new System.Windows.Forms.ToolStripSeparator();
        self.cutToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.copyToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.pasteToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.deleteToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem7 := new System.Windows.Forms.ToolStripSeparator();
        self.findToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.findNextToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.replaceToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.gotoLineToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem8 := new System.Windows.Forms.ToolStripSeparator();
        self.selectAllToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem9 := new System.Windows.Forms.ToolStripSeparator();
        self.bookMarkToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toglleBookmarkToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.nextBookmarkToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.previousBookmarkToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.clearAllBookmarksToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.viewToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.clearOutputToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem10 := new System.Windows.Forms.ToolStripSeparator();
        self.bottomPanelToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.outputWindowToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.errorListToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.compilerMessengersToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.searchResutlsToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.localVariableToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.watchListToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem11 := new System.Windows.Forms.ToolStripSeparator();
        self.quickClassBrowserToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.projectExplorerToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolBoxToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.propertiesToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem12 := new System.Windows.Forms.ToolStripSeparator();
        self.navigateBackwardsToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.navigateToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.projectToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.addNewFileToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.addExsitingFileToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.addFormToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem13 := new System.Windows.Forms.ToolStripSeparator();
        self.addReferenceToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.propertiesToolStripMenuItem1 := new System.Windows.Forms.ToolStripMenuItem();
        self.programToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.runToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.runWithoutIDEToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.commandLineArgumentsToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.stopToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem14 := new System.Windows.Forms.ToolStripSeparator();
        self.buildToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.rebuildToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem15 := new System.Windows.Forms.ToolStripSeparator();
        self.stepOverToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.stepInToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.stepOutToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.runToCursorToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.designerToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.alignToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.leftsToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.rightsToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.topsToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.bottomsToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.horizontalCentersToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.verticalCentersToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toGridToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.centerToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.horizontallyToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.verticallyToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.sizeToToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.controlToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.controlWidthToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.controlHeightToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.gridToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.zorderToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.bringToFrontToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.sendToBackToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.tabOrderToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolsToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.optionsToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem16 := new System.Windows.Forms.ToolStripSeparator();
        self.codeAutocompleteModeToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.goToDeclrationToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.goToDefinitionToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.findReferencesToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.generateRealizationToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.formatCodeToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.runUnitsTestsToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.pluginsToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.codeTemplatesToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.reportABugToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem17 := new System.Windows.Forms.ToolStripSeparator();
        self.viewTasksToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.createProgramTemplatesToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.viewResutlsToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.pT4SetupToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.helpToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.contentsToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.mainFeatureToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.samplesToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.learnPascalABCNETToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem18 := new System.Windows.Forms.ToolStripSeparator();
        self.checkForUpdatesToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.aboutToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStrip1 := new System.Windows.Forms.ToolStrip();
        self.menuStrip1.SuspendLayout();
        self.SuspendLayout();
        // 
        // menuStrip1
        // 
        self.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[9](self.fileToolStripMenuItem, self.editToolStripMenuItem, self.viewToolStripMenuItem, self.projectToolStripMenuItem, self.programToolStripMenuItem, self.designerToolStripMenuItem, self.toolsToolStripMenuItem, self.pluginsToolStripMenuItem, self.helpToolStripMenuItem));
        self.menuStrip1.Location := new System.Drawing.Point(0, 0);
        self.menuStrip1.Name := 'menuStrip1';
        self.menuStrip1.Size := new System.Drawing.Size(593, 24);
        self.menuStrip1.TabIndex := 0;
        self.menuStrip1.Text := 'menuStrip1';
        // 
        // fileToolStripMenuItem
        // 
        self.fileToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[19](self.newToolStripMenuItem, self.newProjectToolStripMenuItem, self.toolStripMenuItem1, self.openToolStripMenuItem, self.openProjectToolStripMenuItem, self.toolStripMenuItem2, self.saveToolStripMenuItem, self.saveAsToolStripMenuItem, self.saveAllToolStripMenuItem, self.toolStripMenuItem3, self.closeToolStripMenuItem, self.closeProjectToolStripMenuItem, self.closeAllButThisToolStripMenuItem, self.toolStripMenuItem4, self.printToolStripMenuItem, self.toolStripMenuItem5, self.recentFilesToolStripMenuItem, self.recentProjectsToolStripMenuItem, self.exitToolStripMenuItem));
        self.fileToolStripMenuItem.Name := 'fileToolStripMenuItem';
        self.fileToolStripMenuItem.Size := new System.Drawing.Size(37, 20);
        self.fileToolStripMenuItem.Text := 'File';
        // 
        // newToolStripMenuItem
        // 
        self.newToolStripMenuItem.Name := 'newToolStripMenuItem';
        self.newToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.N)));
        self.newToolStripMenuItem.Size := new System.Drawing.Size(199, 22);
        self.newToolStripMenuItem.Text := 'New';
        // 
        // newProjectToolStripMenuItem
        // 
        self.newProjectToolStripMenuItem.Name := 'newProjectToolStripMenuItem';
        self.newProjectToolStripMenuItem.Size := new System.Drawing.Size(199, 22);
        self.newProjectToolStripMenuItem.Text := 'New Project';
        // 
        // toolStripMenuItem1
        // 
        self.toolStripMenuItem1.Name := 'toolStripMenuItem1';
        self.toolStripMenuItem1.Size := new System.Drawing.Size(196, 6);
        // 
        // openToolStripMenuItem
        // 
        self.openToolStripMenuItem.Name := 'openToolStripMenuItem';
        self.openToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.O)));
        self.openToolStripMenuItem.Size := new System.Drawing.Size(199, 22);
        self.openToolStripMenuItem.Text := 'Open...';
        // 
        // openProjectToolStripMenuItem
        // 
        self.openProjectToolStripMenuItem.Name := 'openProjectToolStripMenuItem';
        self.openProjectToolStripMenuItem.Size := new System.Drawing.Size(199, 22);
        self.openProjectToolStripMenuItem.Text := 'Open Project...';
        // 
        // toolStripMenuItem2
        // 
        self.toolStripMenuItem2.Name := 'toolStripMenuItem2';
        self.toolStripMenuItem2.Size := new System.Drawing.Size(196, 6);
        // 
        // saveToolStripMenuItem
        // 
        self.saveToolStripMenuItem.Name := 'saveToolStripMenuItem';
        self.saveToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.S)));
        self.saveToolStripMenuItem.Size := new System.Drawing.Size(199, 22);
        self.saveToolStripMenuItem.Text := 'Save';
        // 
        // saveAsToolStripMenuItem
        // 
        self.saveAsToolStripMenuItem.Name := 'saveAsToolStripMenuItem';
        self.saveAsToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys(((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.Shift) 
                    or System.Windows.Forms.Keys.S)));
        self.saveAsToolStripMenuItem.Size := new System.Drawing.Size(199, 22);
        self.saveAsToolStripMenuItem.Text := 'Save As...';
        // 
        // saveAllToolStripMenuItem
        // 
        self.saveAllToolStripMenuItem.Name := 'saveAllToolStripMenuItem';
        self.saveAllToolStripMenuItem.Size := new System.Drawing.Size(199, 22);
        self.saveAllToolStripMenuItem.Text := 'Save All';
        // 
        // toolStripMenuItem3
        // 
        self.toolStripMenuItem3.Name := 'toolStripMenuItem3';
        self.toolStripMenuItem3.Size := new System.Drawing.Size(196, 6);
        // 
        // closeToolStripMenuItem
        // 
        self.closeToolStripMenuItem.Name := 'closeToolStripMenuItem';
        self.closeToolStripMenuItem.Size := new System.Drawing.Size(199, 22);
        self.closeToolStripMenuItem.Text := 'Close';
        // 
        // closeProjectToolStripMenuItem
        // 
        self.closeProjectToolStripMenuItem.Name := 'closeProjectToolStripMenuItem';
        self.closeProjectToolStripMenuItem.Size := new System.Drawing.Size(199, 22);
        self.closeProjectToolStripMenuItem.Text := 'Close Project';
        // 
        // closeAllButThisToolStripMenuItem
        // 
        self.closeAllButThisToolStripMenuItem.Name := 'closeAllButThisToolStripMenuItem';
        self.closeAllButThisToolStripMenuItem.Size := new System.Drawing.Size(199, 22);
        self.closeAllButThisToolStripMenuItem.Text := 'Close All But This';
        // 
        // toolStripMenuItem4
        // 
        self.toolStripMenuItem4.Name := 'toolStripMenuItem4';
        self.toolStripMenuItem4.Size := new System.Drawing.Size(196, 6);
        // 
        // printToolStripMenuItem
        // 
        self.printToolStripMenuItem.Name := 'printToolStripMenuItem';
        self.printToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.P)));
        self.printToolStripMenuItem.Size := new System.Drawing.Size(199, 22);
        self.printToolStripMenuItem.Text := 'Print...';
        // 
        // toolStripMenuItem5
        // 
        self.toolStripMenuItem5.Name := 'toolStripMenuItem5';
        self.toolStripMenuItem5.Size := new System.Drawing.Size(196, 6);
        // 
        // recentFilesToolStripMenuItem
        // 
        self.recentFilesToolStripMenuItem.Name := 'recentFilesToolStripMenuItem';
        self.recentFilesToolStripMenuItem.Size := new System.Drawing.Size(199, 22);
        self.recentFilesToolStripMenuItem.Text := 'Recent Files';
        // 
        // recentProjectsToolStripMenuItem
        // 
        self.recentProjectsToolStripMenuItem.Name := 'recentProjectsToolStripMenuItem';
        self.recentProjectsToolStripMenuItem.Size := new System.Drawing.Size(199, 22);
        self.recentProjectsToolStripMenuItem.Text := 'Recent Projects';
        // 
        // exitToolStripMenuItem
        // 
        self.exitToolStripMenuItem.Name := 'exitToolStripMenuItem';
        self.exitToolStripMenuItem.Size := new System.Drawing.Size(199, 22);
        self.exitToolStripMenuItem.Text := 'Exit';
        self.exitToolStripMenuItem.Click += exitToolStripMenuItem_Click;
        // 
        // editToolStripMenuItem
        // 
        self.editToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[16](self.undoToolStripMenuItem, self.redoToolStripMenuItem, self.toolStripMenuItem6, self.cutToolStripMenuItem, self.copyToolStripMenuItem, self.pasteToolStripMenuItem, self.deleteToolStripMenuItem, self.toolStripMenuItem7, self.findToolStripMenuItem, self.findNextToolStripMenuItem, self.replaceToolStripMenuItem, self.gotoLineToolStripMenuItem, self.toolStripMenuItem8, self.selectAllToolStripMenuItem, self.toolStripMenuItem9, self.bookMarkToolStripMenuItem));
        self.editToolStripMenuItem.Name := 'editToolStripMenuItem';
        self.editToolStripMenuItem.Size := new System.Drawing.Size(39, 20);
        self.editToolStripMenuItem.Text := 'Edit';
        self.editToolStripMenuItem.Click += editToolStripMenuItem_Click;
        // 
        // undoToolStripMenuItem
        // 
        self.undoToolStripMenuItem.Name := 'undoToolStripMenuItem';
        self.undoToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.Z)));
        self.undoToolStripMenuItem.Size := new System.Drawing.Size(177, 22);
        self.undoToolStripMenuItem.Text := 'Undo';
        // 
        // redoToolStripMenuItem
        // 
        self.redoToolStripMenuItem.Name := 'redoToolStripMenuItem';
        self.redoToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys(((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.Shift) 
                    or System.Windows.Forms.Keys.Z)));
        self.redoToolStripMenuItem.Size := new System.Drawing.Size(177, 22);
        self.redoToolStripMenuItem.Text := 'Redo';
        // 
        // toolStripMenuItem6
        // 
        self.toolStripMenuItem6.Name := 'toolStripMenuItem6';
        self.toolStripMenuItem6.Size := new System.Drawing.Size(174, 6);
        // 
        // cutToolStripMenuItem
        // 
        self.cutToolStripMenuItem.Name := 'cutToolStripMenuItem';
        self.cutToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.X)));
        self.cutToolStripMenuItem.Size := new System.Drawing.Size(177, 22);
        self.cutToolStripMenuItem.Text := 'Cut';
        // 
        // copyToolStripMenuItem
        // 
        self.copyToolStripMenuItem.Name := 'copyToolStripMenuItem';
        self.copyToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.C)));
        self.copyToolStripMenuItem.Size := new System.Drawing.Size(177, 22);
        self.copyToolStripMenuItem.Text := 'Copy';
        // 
        // pasteToolStripMenuItem
        // 
        self.pasteToolStripMenuItem.Name := 'pasteToolStripMenuItem';
        self.pasteToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.V)));
        self.pasteToolStripMenuItem.Size := new System.Drawing.Size(177, 22);
        self.pasteToolStripMenuItem.Text := 'Paste';
        // 
        // deleteToolStripMenuItem
        // 
        self.deleteToolStripMenuItem.Name := 'deleteToolStripMenuItem';
        self.deleteToolStripMenuItem.Size := new System.Drawing.Size(177, 22);
        self.deleteToolStripMenuItem.Text := 'Delete';
        // 
        // toolStripMenuItem7
        // 
        self.toolStripMenuItem7.Name := 'toolStripMenuItem7';
        self.toolStripMenuItem7.Size := new System.Drawing.Size(174, 6);
        // 
        // findToolStripMenuItem
        // 
        self.findToolStripMenuItem.Name := 'findToolStripMenuItem';
        self.findToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.F)));
        self.findToolStripMenuItem.Size := new System.Drawing.Size(177, 22);
        self.findToolStripMenuItem.Text := 'Find...';
        // 
        // findNextToolStripMenuItem
        // 
        self.findNextToolStripMenuItem.Name := 'findNextToolStripMenuItem';
        self.findNextToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.L)));
        self.findNextToolStripMenuItem.Size := new System.Drawing.Size(177, 22);
        self.findNextToolStripMenuItem.Text := 'Find Next';
        // 
        // replaceToolStripMenuItem
        // 
        self.replaceToolStripMenuItem.Name := 'replaceToolStripMenuItem';
        self.replaceToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.R)));
        self.replaceToolStripMenuItem.Size := new System.Drawing.Size(177, 22);
        self.replaceToolStripMenuItem.Text := 'Replace...';
        // 
        // gotoLineToolStripMenuItem
        // 
        self.gotoLineToolStripMenuItem.Name := 'gotoLineToolStripMenuItem';
        self.gotoLineToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.G)));
        self.gotoLineToolStripMenuItem.Size := new System.Drawing.Size(177, 22);
        self.gotoLineToolStripMenuItem.Text := 'Goto Line...';
        // 
        // toolStripMenuItem8
        // 
        self.toolStripMenuItem8.Name := 'toolStripMenuItem8';
        self.toolStripMenuItem8.Size := new System.Drawing.Size(174, 6);
        // 
        // selectAllToolStripMenuItem
        // 
        self.selectAllToolStripMenuItem.Name := 'selectAllToolStripMenuItem';
        self.selectAllToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.A)));
        self.selectAllToolStripMenuItem.Size := new System.Drawing.Size(177, 22);
        self.selectAllToolStripMenuItem.Text := 'Select All';
        // 
        // toolStripMenuItem9
        // 
        self.toolStripMenuItem9.Name := 'toolStripMenuItem9';
        self.toolStripMenuItem9.Size := new System.Drawing.Size(174, 6);
        // 
        // bookMarkToolStripMenuItem
        // 
        self.bookMarkToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[4](self.toglleBookmarkToolStripMenuItem, self.nextBookmarkToolStripMenuItem, self.previousBookmarkToolStripMenuItem, self.clearAllBookmarksToolStripMenuItem));
        self.bookMarkToolStripMenuItem.Name := 'bookMarkToolStripMenuItem';
        self.bookMarkToolStripMenuItem.Size := new System.Drawing.Size(177, 22);
        self.bookMarkToolStripMenuItem.Text := 'Bookmarks';
        // 
        // toglleBookmarkToolStripMenuItem
        // 
        self.toglleBookmarkToolStripMenuItem.Name := 'toglleBookmarkToolStripMenuItem';
        self.toglleBookmarkToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Shift or System.Windows.Forms.Keys.F2)));
        self.toglleBookmarkToolStripMenuItem.Size := new System.Drawing.Size(227, 22);
        self.toglleBookmarkToolStripMenuItem.Text := 'Toglle Bookmark';
        // 
        // nextBookmarkToolStripMenuItem
        // 
        self.nextBookmarkToolStripMenuItem.Name := 'nextBookmarkToolStripMenuItem';
        self.nextBookmarkToolStripMenuItem.ShortcutKeys := System.Windows.Forms.Keys.F2;
        self.nextBookmarkToolStripMenuItem.Size := new System.Drawing.Size(227, 22);
        self.nextBookmarkToolStripMenuItem.Text := 'Next Bookmark';
        // 
        // previousBookmarkToolStripMenuItem
        // 
        self.previousBookmarkToolStripMenuItem.Name := 'previousBookmarkToolStripMenuItem';
        self.previousBookmarkToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Alt or System.Windows.Forms.Keys.F2)));
        self.previousBookmarkToolStripMenuItem.Size := new System.Drawing.Size(227, 22);
        self.previousBookmarkToolStripMenuItem.Text := 'Previouns Bookmark';
        // 
        // clearAllBookmarksToolStripMenuItem
        // 
        self.clearAllBookmarksToolStripMenuItem.Name := 'clearAllBookmarksToolStripMenuItem';
        self.clearAllBookmarksToolStripMenuItem.Size := new System.Drawing.Size(227, 22);
        self.clearAllBookmarksToolStripMenuItem.Text := 'Clear All Bookmarks';
        // 
        // viewToolStripMenuItem
        // 
        self.viewToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[17](self.clearOutputToolStripMenuItem, self.toolStripMenuItem10, self.bottomPanelToolStripMenuItem, self.outputWindowToolStripMenuItem, self.errorListToolStripMenuItem, self.compilerMessengersToolStripMenuItem, self.searchResutlsToolStripMenuItem, self.localVariableToolStripMenuItem, self.watchListToolStripMenuItem, self.toolStripMenuItem11, self.quickClassBrowserToolStripMenuItem, self.projectExplorerToolStripMenuItem, self.toolBoxToolStripMenuItem, self.propertiesToolStripMenuItem, self.toolStripMenuItem12, self.navigateBackwardsToolStripMenuItem, self.navigateToolStripMenuItem));
        self.viewToolStripMenuItem.Name := 'viewToolStripMenuItem';
        self.viewToolStripMenuItem.Size := new System.Drawing.Size(45, 20);
        self.viewToolStripMenuItem.Text := 'View';
        // 
        // clearOutputToolStripMenuItem
        // 
        self.clearOutputToolStripMenuItem.Name := 'clearOutputToolStripMenuItem';
        self.clearOutputToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.Delete)));
        self.clearOutputToolStripMenuItem.Size := new System.Drawing.Size(294, 22);
        self.clearOutputToolStripMenuItem.Text := 'Clear Output';
        // 
        // toolStripMenuItem10
        // 
        self.toolStripMenuItem10.Name := 'toolStripMenuItem10';
        self.toolStripMenuItem10.Size := new System.Drawing.Size(291, 6);
        // 
        // bottomPanelToolStripMenuItem
        // 
        self.bottomPanelToolStripMenuItem.Name := 'bottomPanelToolStripMenuItem';
        self.bottomPanelToolStripMenuItem.ShortcutKeys := System.Windows.Forms.Keys.F5;
        self.bottomPanelToolStripMenuItem.Size := new System.Drawing.Size(294, 22);
        self.bottomPanelToolStripMenuItem.Text := 'Bottom Panel';
        // 
        // outputWindowToolStripMenuItem
        // 
        self.outputWindowToolStripMenuItem.Name := 'outputWindowToolStripMenuItem';
        self.outputWindowToolStripMenuItem.Size := new System.Drawing.Size(294, 22);
        self.outputWindowToolStripMenuItem.Text := 'Output Window';
        // 
        // errorListToolStripMenuItem
        // 
        self.errorListToolStripMenuItem.Name := 'errorListToolStripMenuItem';
        self.errorListToolStripMenuItem.Size := new System.Drawing.Size(294, 22);
        self.errorListToolStripMenuItem.Text := 'Error List';
        // 
        // compilerMessengersToolStripMenuItem
        // 
        self.compilerMessengersToolStripMenuItem.Name := 'compilerMessengersToolStripMenuItem';
        self.compilerMessengersToolStripMenuItem.Size := new System.Drawing.Size(294, 22);
        self.compilerMessengersToolStripMenuItem.Text := 'Compiler Messages';
        // 
        // searchResutlsToolStripMenuItem
        // 
        self.searchResutlsToolStripMenuItem.Name := 'searchResutlsToolStripMenuItem';
        self.searchResutlsToolStripMenuItem.Size := new System.Drawing.Size(294, 22);
        self.searchResutlsToolStripMenuItem.Text := 'Search Resutls';
        // 
        // localVariableToolStripMenuItem
        // 
        self.localVariableToolStripMenuItem.Name := 'localVariableToolStripMenuItem';
        self.localVariableToolStripMenuItem.Size := new System.Drawing.Size(294, 22);
        self.localVariableToolStripMenuItem.Text := 'Local Variables';
        // 
        // watchListToolStripMenuItem
        // 
        self.watchListToolStripMenuItem.Name := 'watchListToolStripMenuItem';
        self.watchListToolStripMenuItem.Size := new System.Drawing.Size(294, 22);
        self.watchListToolStripMenuItem.Text := 'Watch List';
        // 
        // toolStripMenuItem11
        // 
        self.toolStripMenuItem11.Name := 'toolStripMenuItem11';
        self.toolStripMenuItem11.Size := new System.Drawing.Size(291, 6);
        // 
        // quickClassBrowserToolStripMenuItem
        // 
        self.quickClassBrowserToolStripMenuItem.Name := 'quickClassBrowserToolStripMenuItem';
        self.quickClassBrowserToolStripMenuItem.Size := new System.Drawing.Size(294, 22);
        self.quickClassBrowserToolStripMenuItem.Text := 'Quick Class Browser Panel';
        // 
        // projectExplorerToolStripMenuItem
        // 
        self.projectExplorerToolStripMenuItem.Name := 'projectExplorerToolStripMenuItem';
        self.projectExplorerToolStripMenuItem.Size := new System.Drawing.Size(294, 22);
        self.projectExplorerToolStripMenuItem.Text := 'Project Explorer';
        // 
        // toolBoxToolStripMenuItem
        // 
        self.toolBoxToolStripMenuItem.Name := 'toolBoxToolStripMenuItem';
        self.toolBoxToolStripMenuItem.Size := new System.Drawing.Size(294, 22);
        self.toolBoxToolStripMenuItem.Text := 'Toolbox';
        // 
        // propertiesToolStripMenuItem
        // 
        self.propertiesToolStripMenuItem.Name := 'propertiesToolStripMenuItem';
        self.propertiesToolStripMenuItem.Size := new System.Drawing.Size(294, 22);
        self.propertiesToolStripMenuItem.Text := 'Properties';
        // 
        // toolStripMenuItem12
        // 
        self.toolStripMenuItem12.Name := 'toolStripMenuItem12';
        self.toolStripMenuItem12.Size := new System.Drawing.Size(291, 6);
        // 
        // navigateBackwardsToolStripMenuItem
        // 
        self.navigateBackwardsToolStripMenuItem.Name := 'navigateBackwardsToolStripMenuItem';
        self.navigateBackwardsToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.OemMinus)));
        self.navigateBackwardsToolStripMenuItem.Size := new System.Drawing.Size(294, 22);
        self.navigateBackwardsToolStripMenuItem.Text := 'Navigate Backward';
        // 
        // navigateToolStripMenuItem
        // 
        self.navigateToolStripMenuItem.Name := 'navigateToolStripMenuItem';
        self.navigateToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys(((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.Shift) 
                    or System.Windows.Forms.Keys.OemMinus)));
        self.navigateToolStripMenuItem.Size := new System.Drawing.Size(294, 22);
        self.navigateToolStripMenuItem.Text := 'Navigate Forward';
        // 
        // projectToolStripMenuItem
        // 
        self.projectToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[6](self.addNewFileToolStripMenuItem, self.addExsitingFileToolStripMenuItem, self.addFormToolStripMenuItem, self.toolStripMenuItem13, self.addReferenceToolStripMenuItem, self.propertiesToolStripMenuItem1));
        self.projectToolStripMenuItem.Name := 'projectToolStripMenuItem';
        self.projectToolStripMenuItem.Size := new System.Drawing.Size(56, 20);
        self.projectToolStripMenuItem.Text := 'Project';
        // 
        // addNewFileToolStripMenuItem
        // 
        self.addNewFileToolStripMenuItem.Name := 'addNewFileToolStripMenuItem';
        self.addNewFileToolStripMenuItem.Size := new System.Drawing.Size(163, 22);
        self.addNewFileToolStripMenuItem.Text := 'Add New File';
        // 
        // addExsitingFileToolStripMenuItem
        // 
        self.addExsitingFileToolStripMenuItem.Name := 'addExsitingFileToolStripMenuItem';
        self.addExsitingFileToolStripMenuItem.Size := new System.Drawing.Size(163, 22);
        self.addExsitingFileToolStripMenuItem.Text := 'Add Exsiting File';
        // 
        // addFormToolStripMenuItem
        // 
        self.addFormToolStripMenuItem.Name := 'addFormToolStripMenuItem';
        self.addFormToolStripMenuItem.Size := new System.Drawing.Size(163, 22);
        self.addFormToolStripMenuItem.Text := 'Add Form';
        // 
        // toolStripMenuItem13
        // 
        self.toolStripMenuItem13.Name := 'toolStripMenuItem13';
        self.toolStripMenuItem13.Size := new System.Drawing.Size(160, 6);
        // 
        // addReferenceToolStripMenuItem
        // 
        self.addReferenceToolStripMenuItem.Name := 'addReferenceToolStripMenuItem';
        self.addReferenceToolStripMenuItem.Size := new System.Drawing.Size(163, 22);
        self.addReferenceToolStripMenuItem.Text := 'Add Reference';
        // 
        // propertiesToolStripMenuItem1
        // 
        self.propertiesToolStripMenuItem1.Name := 'propertiesToolStripMenuItem1';
        self.propertiesToolStripMenuItem1.Size := new System.Drawing.Size(163, 22);
        self.propertiesToolStripMenuItem1.Text := 'Properties';
        // 
        // programToolStripMenuItem
        // 
        self.programToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[12](self.runToolStripMenuItem, self.runWithoutIDEToolStripMenuItem, self.commandLineArgumentsToolStripMenuItem, self.stopToolStripMenuItem, self.toolStripMenuItem14, self.buildToolStripMenuItem, self.rebuildToolStripMenuItem, self.toolStripMenuItem15, self.stepOverToolStripMenuItem, self.stepInToolStripMenuItem, self.stepOutToolStripMenuItem, self.runToCursorToolStripMenuItem));
        self.programToolStripMenuItem.Name := 'programToolStripMenuItem';
        self.programToolStripMenuItem.Size := new System.Drawing.Size(65, 20);
        self.programToolStripMenuItem.Text := 'Program';
        // 
        // runToolStripMenuItem
        // 
        self.runToolStripMenuItem.Name := 'runToolStripMenuItem';
        self.runToolStripMenuItem.ShortcutKeys := System.Windows.Forms.Keys.F9;
        self.runToolStripMenuItem.Size := new System.Drawing.Size(229, 22);
        self.runToolStripMenuItem.Text := 'Run';
        // 
        // runWithoutIDEToolStripMenuItem
        // 
        self.runWithoutIDEToolStripMenuItem.Name := 'runWithoutIDEToolStripMenuItem';
        self.runWithoutIDEToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Shift or System.Windows.Forms.Keys.F9)));
        self.runWithoutIDEToolStripMenuItem.Size := new System.Drawing.Size(229, 22);
        self.runWithoutIDEToolStripMenuItem.Text := 'Run without IDE';
        // 
        // commandLineArgumentsToolStripMenuItem
        // 
        self.commandLineArgumentsToolStripMenuItem.Name := 'commandLineArgumentsToolStripMenuItem';
        self.commandLineArgumentsToolStripMenuItem.Size := new System.Drawing.Size(229, 22);
        self.commandLineArgumentsToolStripMenuItem.Text := 'Command Line Arguments...';
        // 
        // stopToolStripMenuItem
        // 
        self.stopToolStripMenuItem.Name := 'stopToolStripMenuItem';
        self.stopToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.F2)));
        self.stopToolStripMenuItem.Size := new System.Drawing.Size(229, 22);
        self.stopToolStripMenuItem.Text := 'Stop';
        // 
        // toolStripMenuItem14
        // 
        self.toolStripMenuItem14.Name := 'toolStripMenuItem14';
        self.toolStripMenuItem14.Size := new System.Drawing.Size(226, 6);
        // 
        // buildToolStripMenuItem
        // 
        self.buildToolStripMenuItem.Name := 'buildToolStripMenuItem';
        self.buildToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.F9)));
        self.buildToolStripMenuItem.Size := new System.Drawing.Size(229, 22);
        self.buildToolStripMenuItem.Text := 'Build';
        // 
        // rebuildToolStripMenuItem
        // 
        self.rebuildToolStripMenuItem.Name := 'rebuildToolStripMenuItem';
        self.rebuildToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys(((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.Shift) 
                    or System.Windows.Forms.Keys.F9)));
        self.rebuildToolStripMenuItem.Size := new System.Drawing.Size(229, 22);
        self.rebuildToolStripMenuItem.Text := 'Rebuild';
        // 
        // toolStripMenuItem15
        // 
        self.toolStripMenuItem15.Name := 'toolStripMenuItem15';
        self.toolStripMenuItem15.Size := new System.Drawing.Size(226, 6);
        // 
        // stepOverToolStripMenuItem
        // 
        self.stepOverToolStripMenuItem.Name := 'stepOverToolStripMenuItem';
        self.stepOverToolStripMenuItem.ShortcutKeys := System.Windows.Forms.Keys.F8;
        self.stepOverToolStripMenuItem.Size := new System.Drawing.Size(229, 22);
        self.stepOverToolStripMenuItem.Text := 'Step Over';
        // 
        // stepInToolStripMenuItem
        // 
        self.stepInToolStripMenuItem.Name := 'stepInToolStripMenuItem';
        self.stepInToolStripMenuItem.ShortcutKeys := System.Windows.Forms.Keys.F7;
        self.stepInToolStripMenuItem.Size := new System.Drawing.Size(229, 22);
        self.stepInToolStripMenuItem.Text := 'Step In';
        // 
        // stepOutToolStripMenuItem
        // 
        self.stepOutToolStripMenuItem.Name := 'stepOutToolStripMenuItem';
        self.stepOutToolStripMenuItem.ShortcutKeys := System.Windows.Forms.Keys.F10;
        self.stepOutToolStripMenuItem.Size := new System.Drawing.Size(229, 22);
        self.stepOutToolStripMenuItem.Text := 'Step Out';
        // 
        // runToCursorToolStripMenuItem
        // 
        self.runToCursorToolStripMenuItem.Name := 'runToCursorToolStripMenuItem';
        self.runToCursorToolStripMenuItem.ShortcutKeys := System.Windows.Forms.Keys.F4;
        self.runToCursorToolStripMenuItem.Size := new System.Drawing.Size(229, 22);
        self.runToCursorToolStripMenuItem.Text := 'Run to Cursor';
        // 
        // designerToolStripMenuItem
        // 
        self.designerToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[5](self.alignToolStripMenuItem, self.centerToolStripMenuItem, self.sizeToToolStripMenuItem, self.zorderToolStripMenuItem, self.tabOrderToolStripMenuItem));
        self.designerToolStripMenuItem.Name := 'designerToolStripMenuItem';
        self.designerToolStripMenuItem.Size := new System.Drawing.Size(66, 20);
        self.designerToolStripMenuItem.Text := 'Designer';
        // 
        // alignToolStripMenuItem
        // 
        self.alignToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[7](self.leftsToolStripMenuItem, self.rightsToolStripMenuItem, self.topsToolStripMenuItem, self.bottomsToolStripMenuItem, self.horizontalCentersToolStripMenuItem, self.verticalCentersToolStripMenuItem, self.toGridToolStripMenuItem));
        self.alignToolStripMenuItem.Name := 'alignToolStripMenuItem';
        self.alignToolStripMenuItem.Size := new System.Drawing.Size(127, 22);
        self.alignToolStripMenuItem.Text := 'Align';
        // 
        // leftsToolStripMenuItem
        // 
        self.leftsToolStripMenuItem.Name := 'leftsToolStripMenuItem';
        self.leftsToolStripMenuItem.Size := new System.Drawing.Size(174, 22);
        self.leftsToolStripMenuItem.Text := 'Lefts';
        // 
        // rightsToolStripMenuItem
        // 
        self.rightsToolStripMenuItem.Name := 'rightsToolStripMenuItem';
        self.rightsToolStripMenuItem.Size := new System.Drawing.Size(174, 22);
        self.rightsToolStripMenuItem.Text := 'Rights';
        // 
        // topsToolStripMenuItem
        // 
        self.topsToolStripMenuItem.Name := 'topsToolStripMenuItem';
        self.topsToolStripMenuItem.Size := new System.Drawing.Size(174, 22);
        self.topsToolStripMenuItem.Text := 'Tops';
        // 
        // bottomsToolStripMenuItem
        // 
        self.bottomsToolStripMenuItem.Name := 'bottomsToolStripMenuItem';
        self.bottomsToolStripMenuItem.Size := new System.Drawing.Size(174, 22);
        self.bottomsToolStripMenuItem.Text := 'Bottoms';
        // 
        // horizontalCentersToolStripMenuItem
        // 
        self.horizontalCentersToolStripMenuItem.Name := 'horizontalCentersToolStripMenuItem';
        self.horizontalCentersToolStripMenuItem.Size := new System.Drawing.Size(174, 22);
        self.horizontalCentersToolStripMenuItem.Text := 'Horizontal Centers';
        // 
        // verticalCentersToolStripMenuItem
        // 
        self.verticalCentersToolStripMenuItem.Name := 'verticalCentersToolStripMenuItem';
        self.verticalCentersToolStripMenuItem.Size := new System.Drawing.Size(174, 22);
        self.verticalCentersToolStripMenuItem.Text := 'Vertical Centers';
        // 
        // toGridToolStripMenuItem
        // 
        self.toGridToolStripMenuItem.Name := 'toGridToolStripMenuItem';
        self.toGridToolStripMenuItem.Size := new System.Drawing.Size(174, 22);
        self.toGridToolStripMenuItem.Text := 'To Grid';
        // 
        // centerToolStripMenuItem
        // 
        self.centerToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[2](self.horizontallyToolStripMenuItem, self.verticallyToolStripMenuItem));
        self.centerToolStripMenuItem.Name := 'centerToolStripMenuItem';
        self.centerToolStripMenuItem.Size := new System.Drawing.Size(127, 22);
        self.centerToolStripMenuItem.Text := 'Center';
        // 
        // horizontallyToolStripMenuItem
        // 
        self.horizontallyToolStripMenuItem.Name := 'horizontallyToolStripMenuItem';
        self.horizontallyToolStripMenuItem.Size := new System.Drawing.Size(139, 22);
        self.horizontallyToolStripMenuItem.Text := 'Horizontally';
        // 
        // verticallyToolStripMenuItem
        // 
        self.verticallyToolStripMenuItem.Name := 'verticallyToolStripMenuItem';
        self.verticallyToolStripMenuItem.Size := new System.Drawing.Size(139, 22);
        self.verticallyToolStripMenuItem.Text := 'Vertically';
        // 
        // sizeToToolStripMenuItem
        // 
        self.sizeToToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[4](self.controlToolStripMenuItem, self.controlWidthToolStripMenuItem, self.controlHeightToolStripMenuItem, self.gridToolStripMenuItem));
        self.sizeToToolStripMenuItem.Name := 'sizeToToolStripMenuItem';
        self.sizeToToolStripMenuItem.Size := new System.Drawing.Size(127, 22);
        self.sizeToToolStripMenuItem.Text := 'Size to';
        // 
        // controlToolStripMenuItem
        // 
        self.controlToolStripMenuItem.Name := 'controlToolStripMenuItem';
        self.controlToolStripMenuItem.Size := new System.Drawing.Size(154, 22);
        self.controlToolStripMenuItem.Text := 'Control';
        // 
        // controlWidthToolStripMenuItem
        // 
        self.controlWidthToolStripMenuItem.Name := 'controlWidthToolStripMenuItem';
        self.controlWidthToolStripMenuItem.Size := new System.Drawing.Size(154, 22);
        self.controlWidthToolStripMenuItem.Text := 'Control Width';
        // 
        // controlHeightToolStripMenuItem
        // 
        self.controlHeightToolStripMenuItem.Name := 'controlHeightToolStripMenuItem';
        self.controlHeightToolStripMenuItem.Size := new System.Drawing.Size(154, 22);
        self.controlHeightToolStripMenuItem.Text := 'Control Height';
        // 
        // gridToolStripMenuItem
        // 
        self.gridToolStripMenuItem.Name := 'gridToolStripMenuItem';
        self.gridToolStripMenuItem.Size := new System.Drawing.Size(154, 22);
        self.gridToolStripMenuItem.Text := 'Grid';
        // 
        // zorderToolStripMenuItem
        // 
        self.zorderToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[2](self.bringToFrontToolStripMenuItem, self.sendToBackToolStripMenuItem));
        self.zorderToolStripMenuItem.Name := 'zorderToolStripMenuItem';
        self.zorderToolStripMenuItem.Size := new System.Drawing.Size(127, 22);
        self.zorderToolStripMenuItem.Text := 'Z-order';
        // 
        // bringToFrontToolStripMenuItem
        // 
        self.bringToFrontToolStripMenuItem.Name := 'bringToFrontToolStripMenuItem';
        self.bringToFrontToolStripMenuItem.Size := new System.Drawing.Size(149, 22);
        self.bringToFrontToolStripMenuItem.Text := 'Bring to Front';
        // 
        // sendToBackToolStripMenuItem
        // 
        self.sendToBackToolStripMenuItem.Name := 'sendToBackToolStripMenuItem';
        self.sendToBackToolStripMenuItem.Size := new System.Drawing.Size(149, 22);
        self.sendToBackToolStripMenuItem.Text := 'Send to Back';
        // 
        // tabOrderToolStripMenuItem
        // 
        self.tabOrderToolStripMenuItem.Name := 'tabOrderToolStripMenuItem';
        self.tabOrderToolStripMenuItem.Size := new System.Drawing.Size(127, 22);
        self.tabOrderToolStripMenuItem.Text := 'Tab Order';
        // 
        // toolsToolStripMenuItem
        // 
        self.toolsToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[9](self.optionsToolStripMenuItem, self.toolStripMenuItem16, self.codeAutocompleteModeToolStripMenuItem, self.goToDeclrationToolStripMenuItem, self.goToDefinitionToolStripMenuItem, self.findReferencesToolStripMenuItem, self.generateRealizationToolStripMenuItem, self.formatCodeToolStripMenuItem, self.runUnitsTestsToolStripMenuItem));
        self.toolsToolStripMenuItem.Name := 'toolsToolStripMenuItem';
        self.toolsToolStripMenuItem.Size := new System.Drawing.Size(47, 20);
        self.toolsToolStripMenuItem.Text := 'Tools';
        // 
        // optionsToolStripMenuItem
        // 
        self.optionsToolStripMenuItem.Name := 'optionsToolStripMenuItem';
        self.optionsToolStripMenuItem.Size := new System.Drawing.Size(258, 22);
        self.optionsToolStripMenuItem.Text := 'Options...';
        // 
        // toolStripMenuItem16
        // 
        self.toolStripMenuItem16.Name := 'toolStripMenuItem16';
        self.toolStripMenuItem16.Size := new System.Drawing.Size(255, 6);
        // 
        // codeAutocompleteModeToolStripMenuItem
        // 
        self.codeAutocompleteModeToolStripMenuItem.Name := 'codeAutocompleteModeToolStripMenuItem';
        self.codeAutocompleteModeToolStripMenuItem.Size := new System.Drawing.Size(258, 22);
        self.codeAutocompleteModeToolStripMenuItem.Text := 'Code autocomplete mode';
        // 
        // goToDeclrationToolStripMenuItem
        // 
        self.goToDeclrationToolStripMenuItem.Name := 'goToDeclrationToolStripMenuItem';
        self.goToDeclrationToolStripMenuItem.Size := new System.Drawing.Size(258, 22);
        self.goToDeclrationToolStripMenuItem.Text := 'Go to Declaration';
        // 
        // goToDefinitionToolStripMenuItem
        // 
        self.goToDefinitionToolStripMenuItem.Name := 'goToDefinitionToolStripMenuItem';
        self.goToDefinitionToolStripMenuItem.Size := new System.Drawing.Size(258, 22);
        self.goToDefinitionToolStripMenuItem.Text := 'Go to Definition';
        // 
        // findReferencesToolStripMenuItem
        // 
        self.findReferencesToolStripMenuItem.Name := 'findReferencesToolStripMenuItem';
        self.findReferencesToolStripMenuItem.Size := new System.Drawing.Size(258, 22);
        self.findReferencesToolStripMenuItem.Text := 'Find References';
        // 
        // generateRealizationToolStripMenuItem
        // 
        self.generateRealizationToolStripMenuItem.Name := 'generateRealizationToolStripMenuItem';
        self.generateRealizationToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys(((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.Shift) 
                    or System.Windows.Forms.Keys.C)));
        self.generateRealizationToolStripMenuItem.Size := new System.Drawing.Size(258, 22);
        self.generateRealizationToolStripMenuItem.Text := 'Generate Realization';
        // 
        // formatCodeToolStripMenuItem
        // 
        self.formatCodeToolStripMenuItem.Name := 'formatCodeToolStripMenuItem';
        self.formatCodeToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys(((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.Shift) 
                    or System.Windows.Forms.Keys.F)));
        self.formatCodeToolStripMenuItem.Size := new System.Drawing.Size(258, 22);
        self.formatCodeToolStripMenuItem.Text := 'Format Code';
        // 
        // runUnitsTestsToolStripMenuItem
        // 
        self.runUnitsTestsToolStripMenuItem.Name := 'runUnitsTestsToolStripMenuItem';
        self.runUnitsTestsToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys(((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.Shift) 
                    or System.Windows.Forms.Keys.T)));
        self.runUnitsTestsToolStripMenuItem.Size := new System.Drawing.Size(258, 22);
        self.runUnitsTestsToolStripMenuItem.Text := 'Run units tests';
        // 
        // pluginsToolStripMenuItem
        // 
        self.pluginsToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[7](self.codeTemplatesToolStripMenuItem, self.reportABugToolStripMenuItem, self.toolStripMenuItem17, self.viewTasksToolStripMenuItem, self.createProgramTemplatesToolStripMenuItem, self.viewResutlsToolStripMenuItem, self.pT4SetupToolStripMenuItem));
        self.pluginsToolStripMenuItem.Name := 'pluginsToolStripMenuItem';
        self.pluginsToolStripMenuItem.Size := new System.Drawing.Size(58, 20);
        self.pluginsToolStripMenuItem.Text := 'Plugins';
        // 
        // codeTemplatesToolStripMenuItem
        // 
        self.codeTemplatesToolStripMenuItem.Name := 'codeTemplatesToolStripMenuItem';
        self.codeTemplatesToolStripMenuItem.Size := new System.Drawing.Size(282, 22);
        self.codeTemplatesToolStripMenuItem.Text := 'Code templates';
        // 
        // reportABugToolStripMenuItem
        // 
        self.reportABugToolStripMenuItem.Name := 'reportABugToolStripMenuItem';
        self.reportABugToolStripMenuItem.Size := new System.Drawing.Size(282, 22);
        self.reportABugToolStripMenuItem.Text := 'Report a bug';
        // 
        // toolStripMenuItem17
        // 
        self.toolStripMenuItem17.Name := 'toolStripMenuItem17';
        self.toolStripMenuItem17.Size := new System.Drawing.Size(279, 6);
        // 
        // viewTasksToolStripMenuItem
        // 
        self.viewTasksToolStripMenuItem.Name := 'viewTasksToolStripMenuItem';
        self.viewTasksToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys(((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.Shift) 
                    or System.Windows.Forms.Keys.D)));
        self.viewTasksToolStripMenuItem.Size := new System.Drawing.Size(282, 22);
        self.viewTasksToolStripMenuItem.Text := 'View tasks';
        // 
        // createProgramTemplatesToolStripMenuItem
        // 
        self.createProgramTemplatesToolStripMenuItem.Name := 'createProgramTemplatesToolStripMenuItem';
        self.createProgramTemplatesToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys(((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.Shift) 
                    or System.Windows.Forms.Keys.L)));
        self.createProgramTemplatesToolStripMenuItem.Size := new System.Drawing.Size(282, 22);
        self.createProgramTemplatesToolStripMenuItem.Text := 'Create program template';
        // 
        // viewResutlsToolStripMenuItem
        // 
        self.viewResutlsToolStripMenuItem.Name := 'viewResutlsToolStripMenuItem';
        self.viewResutlsToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys(((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.Shift) 
                    or System.Windows.Forms.Keys.R)));
        self.viewResutlsToolStripMenuItem.Size := new System.Drawing.Size(282, 22);
        self.viewResutlsToolStripMenuItem.Text := 'View resutls';
        // 
        // pT4SetupToolStripMenuItem
        // 
        self.pT4SetupToolStripMenuItem.Name := 'pT4SetupToolStripMenuItem';
        self.pT4SetupToolStripMenuItem.Size := new System.Drawing.Size(282, 22);
        self.pT4SetupToolStripMenuItem.Text := 'PT4 Setup';
        // 
        // helpToolStripMenuItem
        // 
        self.helpToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[7](self.contentsToolStripMenuItem, self.mainFeatureToolStripMenuItem, self.samplesToolStripMenuItem, self.learnPascalABCNETToolStripMenuItem, self.toolStripMenuItem18, self.checkForUpdatesToolStripMenuItem, self.aboutToolStripMenuItem));
        self.helpToolStripMenuItem.Name := 'helpToolStripMenuItem';
        self.helpToolStripMenuItem.Size := new System.Drawing.Size(44, 20);
        self.helpToolStripMenuItem.Text := 'Help';
        // 
        // contentsToolStripMenuItem
        // 
        self.contentsToolStripMenuItem.Name := 'contentsToolStripMenuItem';
        self.contentsToolStripMenuItem.ShortcutKeys := System.Windows.Forms.Keys.F1;
        self.contentsToolStripMenuItem.Size := new System.Drawing.Size(187, 22);
        self.contentsToolStripMenuItem.Text := 'Contents';
        // 
        // mainFeatureToolStripMenuItem
        // 
        self.mainFeatureToolStripMenuItem.Name := 'mainFeatureToolStripMenuItem';
        self.mainFeatureToolStripMenuItem.Size := new System.Drawing.Size(187, 22);
        self.mainFeatureToolStripMenuItem.Text := 'Main Features';
        // 
        // samplesToolStripMenuItem
        // 
        self.samplesToolStripMenuItem.Name := 'samplesToolStripMenuItem';
        self.samplesToolStripMenuItem.Size := new System.Drawing.Size(187, 22);
        self.samplesToolStripMenuItem.Text := 'Samples';
        // 
        // learnPascalABCNETToolStripMenuItem
        // 
        self.learnPascalABCNETToolStripMenuItem.Name := 'learnPascalABCNETToolStripMenuItem';
        self.learnPascalABCNETToolStripMenuItem.Size := new System.Drawing.Size(187, 22);
        self.learnPascalABCNETToolStripMenuItem.Text := 'Learn PascalABC.NET';
        // 
        // toolStripMenuItem18
        // 
        self.toolStripMenuItem18.Name := 'toolStripMenuItem18';
        self.toolStripMenuItem18.Size := new System.Drawing.Size(184, 6);
        // 
        // checkForUpdatesToolStripMenuItem
        // 
        self.checkForUpdatesToolStripMenuItem.Name := 'checkForUpdatesToolStripMenuItem';
        self.checkForUpdatesToolStripMenuItem.Size := new System.Drawing.Size(187, 22);
        self.checkForUpdatesToolStripMenuItem.Text := 'Check for Updates';
        // 
        // aboutToolStripMenuItem
        // 
        self.aboutToolStripMenuItem.Name := 'aboutToolStripMenuItem';
        self.aboutToolStripMenuItem.Size := new System.Drawing.Size(187, 22);
        self.aboutToolStripMenuItem.Text := 'About';
        self.aboutToolStripMenuItem.Click += aboutToolStripMenuItem_Click;
        // 
        // toolStrip1
        // 
        self.toolStrip1.Location := new System.Drawing.Point(0, 24);
        self.toolStrip1.Name := 'toolStrip1';
        self.toolStrip1.Size := new System.Drawing.Size(593, 25);
        self.toolStrip1.TabIndex := 1;
        self.toolStrip1.Text := 'toolStrip1';
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(593, 461);
        self.Controls.Add(self.toolStrip1);
        self.Controls.Add(self.menuStrip1);
        self.MainMenuStrip := self.menuStrip1;
        self.Name := 'Form1';
        self.Text := 'Form1';
        self.Load += Form1_Load;
        self.SizeChanged += Form1_SizeChanged;
        self.menuStrip1.ResumeLayout(false);
        self.menuStrip1.PerformLayout();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
