﻿
procedure InitializeComponent;
    begin
        self.SuspendLayout();
        // 
        // TAboutBox
        // 
        self.ClientSize := new System.Drawing.Size(596, 384);
        self.Name := 'TAboutBox';
        self.Text := 'Form1';
        self.Load += AboutBox_Load;
        //this.Load += new System.EventHandler(this.AboutBox_Load);        
        self.Shown += AboutBox_Shown;
        //this.Shown += new System.EventHandler(this.AboutBox_Shown);
        
        self.ResumeLayout(false);
        
        // GroupBox1 설정
        groupBox1 := new GroupBox();
        
        
        
        // ListView 설정
        dgvModules := new ListView();
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
       chType := new ColumnHeader();
       chType.Text := 'Type';
       chType.Width := 65; //100;
       
       chName := new ColumnHeader();
       chName.Text := 'Name';
       chName.Width := 150; //150;
       
       chVersion := new ColumnHeader();
       chVersion.Text := 'Version';
       chVersion.Width := 74; //100;
      
       chCopyright := new ColumnHeader();
       chCopyright.Text := 'Copyright';
       chCopyright.Width := 150; //150;
 


       // 컬럼 헤더 추가
       //dgvModules.Columns.AddRange([chType, chName, chVersion, chCopyright]); //오류발생
       // 컬럼 헤더 개별적으로 추가
       dgvModules.Columns.Add(chType);
       dgvModules.Columns.Add(chName);
       dgvModules.Columns.Add(chVersion);
       dgvModules.Columns.Add(chCopyright); 
       
       // Button 설정
       button1 := new Button();       
       
      // LinkLabels 설정
      linkLabel1 := new LinkLabel();
      linkLabel2 := new LinkLabel();
      linkLabel3 := new LinkLabel();
      linkLabel4 := new LinkLabel();
      
      // Labels 설정
      lVersion := new &Label();
      label12 := new &Label();
      label9 := new &Label();
      lVersionText := new &Label();
      label1 := new &Label();
      label4 := new &Label();
      label5 := new &Label();
      label2 := new &Label();
      label3 := new &Label();
      label6 := new &Label();
      label13 := new &Label();
      
      // TableLayoutPanel 설정
      tableLayoutPanel1 := new TableLayoutPanel();
      
      // FlowLayoutPanels 설정
      flowLayoutPanel1 := new FlowLayoutPanel();
      flowLayoutPanel2 := new FlowLayoutPanel();
      flowLayoutPanel3 := new FlowLayoutPanel();
      flowLayoutPanel4 := new FlowLayoutPanel();
      
      // GroupBox2 설정
      groupBox2 := new GroupBox();
      
      // GroupBox 및 LayoutPanel의 추가 설정 가능
      groupBox1.SuspendLayout();
      tableLayoutPanel1.SuspendLayout();
      flowLayoutPanel1.SuspendLayout();
      flowLayoutPanel2.SuspendLayout();
      flowLayoutPanel3.SuspendLayout();
      flowLayoutPanel4.SuspendLayout();
      groupBox2.SuspendLayout();
      
      // 여기서 나머지 초기화 작업 수행 가능
      
      groupBox1.ResumeLayout(false);
      tableLayoutPanel1.ResumeLayout(false);
      flowLayoutPanel1.ResumeLayout(false);
      flowLayoutPanel2.ResumeLayout(false);
      flowLayoutPanel3.ResumeLayout(false);
      flowLayoutPanel4.ResumeLayout(false);
      groupBox2.ResumeLayout(false);
      Self.ResumeLayout(false);
      
      
      // GroupBox1 설정
      // ListView (dgvModules) GroupBox에 추가
      groupBox1.Controls.Add(dgvModules);
      // GroupBox 위치 설정
      groupBox1.Location := new System.Drawing.Point(8, 160 - 10);
      // GroupBox 이름 설정
      groupBox1.Name := 'groupBox1';
      // GroupBox 크기 설정
      groupBox1.Size := new System.Drawing.Size(530 + 60, 137);
      // GroupBox 탭 인덱스 설정
      groupBox1.TabIndex := 12;
      // TabStop 설정
      groupBox1.TabStop := False;
      // GroupBox 텍스트 설정
      groupBox1.Text := 'Components';//'COMPONENTS';
      // GroupBox Enter 이벤트 핸들러 추가
      groupBox1.Enter += groupBox1_Enter;
  
      // 
      // button1
      // 

      // 위치 설정
      button1.Location := new System.Drawing.Point(220, 308 - 18);
      // 이름 설정
      button1.Name := 'button1';
      // 크기 설정
      button1.Size := new System.Drawing.Size(107, 23);
      // Tab 인덱스 설정
      button1.TabIndex := 13;
      // 텍스트 설정
      button1.Text := 'OK'; //'!OK';
      // 배경 스타일 사용 설정
      button1.UseVisualStyleBackColor := True;
      // Click 이벤트 핸들러 추가
      button1.Click += button1_Click;      

      // 
      // linkLabel1
      // 

      // AutoSize 설정
      linkLabel1.AutoSize := False;//True;
      linkLabel1.Font := new System.Drawing.Font('Microsoft Sans Serif', 8.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      // 위치 설정
      linkLabel1.Location := new System.Drawing.Point(11, 105 - 5 + 2);
      // 이름 설정
      linkLabel1.Name := 'linkLabel1';
      // 크기 설정 (AutoSize가 True인 경우 크기 설정이 자동으로 처리됨)
      linkLabel1.Size := new System.Drawing.Size(124, 13);
      // Tab 인덱스 설정
      linkLabel1.TabIndex := 20;
      // TabStop 설정
      linkLabel1.TabStop := True;
      // 텍스트 설정
      linkLabel1.Text := 'PascalABC.NET Site';//'!PASCALABCNET_SITE';
      // LinkClicked 이벤트 핸들러 추가
      linkLabel1.LinkClicked += linkLabel1_LinkClicked;
      //uAboutBox.pas(221) : Incompatible types: 'procedure(sender: object;e: System.EventArgs)' and 'System.Windows.Forms.LinkLabelLinkClickedEventHandler'
  
      // 
      // linkLabel2
      //
      
      // AutoSize 설정
      linkLabel2.AutoSize := False;//True;
      linkLabel2.Font := new System.Drawing.Font('Microsoft Sans Serif', 8.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      // 위치 설정
      linkLabel2.Location := new System.Drawing.Point(11, 122 - 5);
      // 이름 설정
      linkLabel2.Name := 'linkLabel2';
      // 크기 설정 (AutoSize가 True인 경우 크기 설정이 자동으로 처리됨)
      linkLabel2.Size := new System.Drawing.Size(139, 13);
      // Tab 인덱스 설정
      linkLabel2.TabIndex := 21;
      // TabStop 설정
      linkLabel2.TabStop := True;
      // 텍스트 설정
      linkLabel2.Text := 'PascalABC.NET Forum';//'!PASCALABCNET_FORUM';
      // LinkClicked 이벤트 핸들러 추가
      linkLabel2.LinkClicked += linkLabel2_LinkClicked;
      
      // 
      // lVersion
      // 
      lVersion.AutoSize := True;
      lVersion.Font := new System.Drawing.Font('Microsoft Sans Serif', 8.25, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      //this.lVersion.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      lVersion.ForeColor := Color.DarkGreen;
      lVersion.Location := new Point(65, 0); 
      lVersion.Margin := new System.Windows.Forms.Padding(0, 0, 3, 0);
      lVersion.Name := 'lVersion';
      // Size 설정
      lVersion.Width := 44;
      lVersion.Height := 13;
      //this.lVersion.Size = new System.Drawing.Size(44, 13);

      // TabIndex 설정
      lVersion.TabIndex := 5;
      lVersion.Text := 'version'; //'3.10, сборка 3547 (2024-09-25)';

      // 
      // label12
      // 
      label12.AutoSize := True;
      label12.Font := new System.Drawing.Font('Microsoft Sans Serif', 8.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      //this.label12.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      label12.Location := new Point(3, 0); 
      label12.Name := 'label12';
      // Size 설정
      label12.Width := 311;
      label12.Height := 13;
      //this.label12.Size = new System.Drawing.Siz

      // TabIndex 설정
      label12.TabIndex := 17;
      label12.Text := 'Copyright (c) 2005, 2024 Ivan Bondarev, Stanislav Mikhalkovich';

      // 
      // label9
      // 
      label9.AutoSize := True;
      label9.Location := new Point(3, 0); 
      label9.Name := 'label9';
      // Size 설정
      label9.Width := 49;
      label9.Height := 13;
      //this.label9.Size = new System.Drawing.Size(49, 13);

      // TabIndex 설정
      label9.TabIndex := 22;
      label9.Text := 'Russia, SFedU, mechmath; Germany'; //'MADEIN';

      // 
      // lVersionText
      // 
      lVersionText.AutoSize := True;
      lVersionText.Font := new System.Drawing.Font('Microsoft Sans Serif', 8.25, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      //this.lVersionText.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      lVersionText.Location := new Point(3 , 0);
      lVersionText.Margin := new System.Windows.Forms.Padding(3, 0, 0, 0);
      //this.lVersionText.Margin = new System.Windows.Forms.Padding(3, 0, 0, 0);
      
      lVersionText.Name := 'lVersionText';
      // Size 설정
      lVersionText.Width := 62;
      lVersionText.Height := 13;
      //this.lVersionText.Size = new System.Drawing.Size(62, 13)
      lVersionText.TabIndex := 4;
      lVersionText.Text := 'Version'; //'VERSION';

      // 
      // label1
      // 
      label1.AutoSize := True;
      label1.Font := new System.Drawing.Font('Microsoft Sans Serif', 8.25, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      //this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      label1.ForeColor := Color.Black;
      label1.Location := new Point(3 , 0);
      label1.Name := 'label1';
      // Size 설정
      label1.Width := 98;
      label1.Height := 13;
      //this.label1.Size = new System.Drawing.Size(98, 13)

      // TabIndex 설정
      label1.TabIndex := 3;
      label1.Text := 'PascalABC.NET';

      // 
      // tableLayoutPanel1
      //   

      tableLayoutPanel1.ColumnCount := 1;
      tableLayoutPanel1.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 100));
      // FlowLayoutPanels를 TableLayoutPanel에 추가
      tableLayoutPanel1.Controls.Add(flowLayoutPanel1, 0, 0);
      tableLayoutPanel1.Controls.Add(flowLayoutPanel3, 0, 1);
      tableLayoutPanel1.Controls.Add(flowLayoutPanel2, 0, 3);
      tableLayoutPanel1.Controls.Add(flowLayoutPanel4, 0, 2);

      tableLayoutPanel1.Location := new Point(5, 8);
      tableLayoutPanel1.Name := 'tableLayoutPanel1';
 
      tableLayoutPanel1.RowCount := 4;
      // 각 Row의 높이를 설정 (전체 비율에 맞춰 20%씩)
      tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Percent, 20));
      tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Percent, 20));
      tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Percent, 20));
      tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Percent, 20));

      // 위치와 크기 설정
      tableLayoutPanel1.Width := 332;
      tableLayoutPanel1.Height := 95;
      //tableLayoutPanel1.Size :=  new System.Drawing.Size(332, 95);
      
      tableLayoutPanel1.TabIndex := 23;

      // 
      // flowLayoutPanel1
      // 
      flowLayoutPanel1.Controls.Add(label1);
      flowLayoutPanel1.Dock := DockStyle.Fill;
      flowLayoutPanel1.Location := new Point(3, 3);
      flowLayoutPanel1.Name := 'flowLayoutPanel1';

      flowLayoutPanel1.Width := 326;
      flowLayoutPanel1.Height := 17;
      //flowLayoutPanel1.Size := new System.Drawing.Size(326, 17);
      
      flowLayoutPanel1.TabIndex := 0;

      // 
      // flowLayoutPanel3
      // 
      flowLayoutPanel3.Controls.Add(lVersionText);
      flowLayoutPanel3.Controls.Add(lVersion);
      flowLayoutPanel3.Dock := DockStyle.Fill;
      flowLayoutPanel3.Location := new Point(3, 23);
      flowLayoutPanel3.Margin := new System.Windows.Forms.Padding(3, 0, 3, 3);      
//this.flowLayoutPanel3.Margin = new System.Windows.Forms.Padding(3, 0, 3, 3);      
      flowLayoutPanel3.Name := 'flowLayoutPanel3';

      flowLayoutPanel3.Width := 326;
      flowLayoutPanel3.Height := 20;
      //flowLayoutPanel3.Size := new System.Drawing.Size(326, 20);
      
      flowLayoutPanel3.TabIndex := 2;
      
      // 
      // flowLayoutPanel2
      // 
      flowLayoutPanel2.Controls.Add(label9);
      flowLayoutPanel2.Dock := DockStyle.Fill;
      flowLayoutPanel2.Location := new Point(3, 69);
      flowLayoutPanel2.Margin := new System.Windows.Forms.Padding(3, 0, 3, 3);      
//this.flowLayoutPanel2.Margin = new System.Windows.Forms.Padding(3, 0, 3, 3);      
      flowLayoutPanel2.Name := 'flowLayoutPanel2';

      flowLayoutPanel2.Width := 326;
      flowLayoutPanel2.Height := 23;
      //flowLayoutPanel2.Size := new System.Drawing.Size(326, 23);
      
      flowLayoutPanel2.TabIndex := 1;
      
      // 
      // flowLayoutPanel4
      // 
      flowLayoutPanel4.Controls.Add(label12);
      flowLayoutPanel4.Dock := DockStyle.Fill;
      flowLayoutPanel4.Location := new Point(3, 49);
      flowLayoutPanel4.Name := 'flowLayoutPanel4';

      flowLayoutPanel4.Width := 326;
      flowLayoutPanel4.Height := 17;
      //flowLayoutPanel4.Size :=  new System.Drawing.Size(326, 17);

      flowLayoutPanel4.TabIndex := 3;

      // 
      // label4
      // 
      label4.AutoSize := True;
      label4.Font := new System.Drawing.Font('Microsoft Sans Serif', 8.25, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      //this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      label4.Location := new Point(10, 50); 
      label4.Name := 'label4';
      // Size 설정
      label4.Width := 93;
      label4.Height := 13;
      //this.label4.Size = new System.Drawing.Size(93, 13);

      // TabIndex 설정
      label4.TabIndex := 22;
      label4.Text := 'Lead Developer:';//'!DEVELOPERS';

      // 
      // label5
      // 
      label5.AutoSize := True;
      label5.Font := new System.Drawing.Font('Microsoft Sans Serif', 8.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      //this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      label5.Location := new Point(20, 65); 
      label5.Name := 'label5';
      // Size 설정
      label5.Width := 85;
      label5.Height := 13;
      //this.label5.Size = new System.Drawing.Size(85, 13);

      // TabIndex 설정
      label5.TabIndex := 22;
      label5.Text := 'Ivan Bondarev (SFedU, Germany)';//'DEVELOPERS1';

      // 
      // label2
      // 
      label2.AutoSize := True;
      label2.Font := new System.Drawing.Font('Microsoft Sans Serif', 8.25, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      //this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      label2.Location := new Point(10, 16); 
      label2.Name := 'label2';
      // Size 설정
      label2.Width := 110;
      label2.Height := 13;
      //this.label2.Size = new System.Drawing.Size(110, 13);

      // TabIndex 설정
      label2.TabIndex := 26;
      label2.Text := 'Project manager:';//'PROJECT_ADMIN';

      // 
      // label3
      // 
      label3.AutoSize := True;
      label3.Font := new System.Drawing.Font('Microsoft Sans Serif', 8.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      //this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      label3.Location := new Point(20, 31); 
      label3.Name := 'label3';
      // Size 설정
      label3.Width := 120;
      label3.Height := 13;
      //this.label3.Size = new System.Drawing.Size(120, 13);

      // TabIndex 설정
      label3.TabIndex := 16;
      label3.Text := 'Stainslav Mikhalkovich (SFedU)';//'PROJECT_ADMIN_FIO';

      // 
      // groupBox2
      //
      groupBox2.Controls.Add(linkLabel3);
      groupBox2.Controls.Add(label6);
      groupBox2.Controls.Add(label13);
      groupBox2.Controls.Add(label3);
      groupBox2.Controls.Add(label2);
      groupBox2.Controls.Add(label5);
      groupBox2.Controls.Add(label4);
      groupBox2.Font := new System.Drawing.Font('Microsoft Sans Serif', 8.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      //this.groupBox2.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      groupBox2.Location := new Point(337 + 30 + 4, 8); 
      groupBox2.Name := 'groupBox2';
      groupBox2.Width := 201 + 20 + 5;
      groupBox2.Height := 132 - 10;
      //this.groupBox2.Size = new System.Drawing.Size(201, 132);
      groupBox2.TabIndex := 14;
      groupBox2.TabStop := false;
      groupBox2.Text := 'Lead Developer'; // 'DEVELOPERS';
      
      // 
      // linkLabel3
      //
      
      // AutoSize 설정
      linkLabel3.AutoSize := True;
      linkLabel3.Font := new System.Drawing.Font('Microsoft Sans Serif', 8.25, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      //this.linkLabel3.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      // 위치 설정
      linkLabel3.Location := new System.Drawing.Point(10, 84);
      // 이름 설정
      linkLabel3.Name := 'linkLabel3';
      // 크기 설정 (AutoSize가 True인 경우 크기 설정이 자동으로 처리됨)
      linkLabel3.Size := new System.Drawing.Size(196, 13);
      // Tab 인덱스 설정
      linkLabel3.TabIndex := 24;
      // TabStop 설정
      linkLabel3.TabStop := True;
      // 텍스트 설정
      linkLabel3.Text := 'Developers';//'!PASCALABCNET_DEVELOPERS';
      // LinkClicked 이벤트 핸들러 추가
      linkLabel3.LinkClicked += linkLabel3_LinkClicked;
      
      // 
      // label6
      // 
      label6.AutoSize := True;
      label6.Font := new System.Drawing.Font('Microsoft Sans Serif', 8.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      //this.label6.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      label6.Location := new Point(20, 79); 
      label6.Name := 'label6';
      // Size 설정
      label6.Width := 85;
      label6.Height := 13;
      //this.label6.Size = new System.Drawing.Size(85, 13);

      // TabIndex 설정
      label6.TabIndex := 29;
      label6.Text := '';//'DEVELOPERS2';
      
      // 
      // label13
      // 
      label13.AutoSize := True;
      label13.Font := new System.Drawing.Font('Microsoft Sans Serif', 8.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      //this.label13.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      label13.Location := new Point(20, 93); 
      label13.Name := 'label13';
      // Size 설정
      label13.Width := 85;
      label13.Height := 13;
      //this.label13.Size = new System.Drawing.Size(85, 13);

      // TabIndex 설정
      label13.TabIndex := 28;
      label13.Text := '';//'DEVELOPERS3';
      
      // 
      // linkLabel4
      //
      
      // AutoSize 설정
      linkLabel4.AutoSize := False;//True;
      linkLabel4.Font := new System.Drawing.Font('Microsoft Sans Serif', 8.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
      // 위치 설정
      linkLabel4.Location := new System.Drawing.Point(11, 139 - 5);
      // 이름 설정
      linkLabel4.Name := 'linkLabel4';
      // 크기 설정 (AutoSize가 True인 경우 크기 설정이 자동으로 처리됨)
      linkLabel4.Size := new System.Drawing.Size(159, 13);
      // Tab 인덱스 설정
      linkLabel4.TabIndex := 25;
      // TabStop 설정
      linkLabel4.TabStop := True;
      // 텍스트 설정
      linkLabel4.Text := 'PascalABC.NET Telegram Channel';//'!PASCALABCNET_TELEGRAM';
      // LinkClicked 이벤트 핸들러 추가
      linkLabel4.LinkClicked += linkLabel4_LinkClicked;

      
      // 
      // AboutBox
      // 
      //self.AutoScaleDimensions := new System.Drawing.SizeF(6, 13);
      //this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
      //self.AutoScaleMode := System.Windows.Forms.AutoScaleMode.Font;
      // this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
      //self.ClientSize := new System.Drawing.Size(546, 345);
      self.Controls.Add(linkLabel4);
      self.Controls.Add(tableLayoutPanel1);
      self.Controls.Add(linkLabel2);
      self.Controls.Add(linkLabel1);
      self.Controls.Add(groupBox2);
      self.Controls.Add(button1);
      self.Controls.Add(groupBox1);
      
      self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedDialog;
      //self.Name := 'AboutBox';
      //self.Padding :=  new System.Windows.Forms.Padding(9);
      self.MaximizeBox := false;
      self.MinimizeBox := false;
      self.ShowIcon := false;
      self.ShowInTaskbar := false;
      //self.StartPosition := System.Windows.Forms.FormStartPosition.CenterParent;
      self.groupBox1.ResumeLayout(false);
      
      //self.Text := 'FORMTEXT';
      //self.FormClosing += new System.Windows.Forms.FormClosingEventHandler(AboutBox_FormClosing);
      //this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.AboutBox_FormClosing);
      //self.Load += new System.EventHandler(AboutBox_Load);
      //self.Shown += new System.EventHandler(this.AboutBox_Shown);
      self.groupBox1.ResumeLayout(false);
      self.tableLayoutPanel1.ResumeLayout(false);
      self.flowLayoutPanel1.ResumeLayout(false);
      self.flowLayoutPanel1.PerformLayout();
      self.flowLayoutPanel3.ResumeLayout(false);
      self.flowLayoutPanel3.PerformLayout();
      self.flowLayoutPanel2.ResumeLayout(false);
      self.flowLayoutPanel2.PerformLayout();
      self.flowLayoutPanel4.ResumeLayout(false);
      self.flowLayoutPanel4.PerformLayout();
      self.groupBox2.ResumeLayout(false);
      self.groupBox2.PerformLayout();
      
      self.ResumeLayout(false);
      self.PerformLayout();
      
    end;
    