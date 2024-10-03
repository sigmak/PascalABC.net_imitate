procedure InitializeComponent;
    begin
        self.label1 := new System.Windows.Forms.Label();
        self.tableLayoutPanel1 := new System.Windows.Forms.TableLayoutPanel();
        self.SuspendLayout();
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(71, 86);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(100, 23);
        self.label1.TabIndex := 0;
        self.label1.Text := 'label1';
        // 
        // tableLayoutPanel1
        // 
        self.tableLayoutPanel1.ColumnCount := 2;
        self.tableLayoutPanel1.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 50));
        self.tableLayoutPanel1.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 50));
        self.tableLayoutPanel1.Location := new System.Drawing.Point(49, 112);
        self.tableLayoutPanel1.Name := 'tableLayoutPanel1';
        self.tableLayoutPanel1.RowCount := 2;
        self.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 50));
        self.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 50));
        self.tableLayoutPanel1.Size := new System.Drawing.Size(200, 100);
        self.tableLayoutPanel1.TabIndex := 1;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(477, 244);
        self.Controls.Add(self.tableLayoutPanel1);
        self.Controls.Add(self.label1);
        self.Name := 'Form1';
        self.Text := 'Form1';
        self.Load += Form1_Load;
        self.ResumeLayout(false);
    end;
