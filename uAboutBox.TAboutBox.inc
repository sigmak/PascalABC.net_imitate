procedure InitializeComponent;
    begin
        self.groupBox1 := new System.Windows.Forms.GroupBox();
        self.button1 := new System.Windows.Forms.Button();
        self.listView1 := new System.Windows.Forms.ListView();
        self.groupBox2 := new System.Windows.Forms.GroupBox();
        self.groupBox1.SuspendLayout();
        self.SuspendLayout();
        // 
        // groupBox1
        // 
        self.groupBox1.Controls.Add(self.listView1);
        self.groupBox1.Location := new System.Drawing.Point(22, 221);
        self.groupBox1.Name := 'groupBox1';
        self.groupBox1.Size := new System.Drawing.Size(562, 100);
        self.groupBox1.TabIndex := 0;
        self.groupBox1.TabStop := false;
        self.groupBox1.Text := 'groupBox1';
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(220, 340);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(75, 23);
        self.button1.TabIndex := 1;
        self.button1.Text := 'button1';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // listView1
        // 
        self.listView1.Location := new System.Drawing.Point(6, 20);
        self.listView1.Name := 'listView1';
        self.listView1.Size := new System.Drawing.Size(121, 32);
        self.listView1.TabIndex := 0;
        self.listView1.UseCompatibleStateImageBehavior := false;
        // 
        // groupBox2
        // 
        self.groupBox2.Location := new System.Drawing.Point(371, 23);
        self.groupBox2.Name := 'groupBox2';
        self.groupBox2.Size := new System.Drawing.Size(213, 88);
        self.groupBox2.TabIndex := 2;
        self.groupBox2.TabStop := false;
        self.groupBox2.Text := 'groupBox2';
        // 
        // TAboutBox
        // 
        self.ClientSize := new System.Drawing.Size(596, 384);
        self.Controls.Add(self.groupBox2);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.groupBox1);
        self.Name := 'TAboutBox';
        self.Text := 'Form1';
        self.Load += About_Load;
        self.groupBox1.ResumeLayout(false);
        self.ResumeLayout(false);
    end;
