Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
  open : Button;
  save_as : Button;
  save : Button;
  
  generate_visualizator_cpp : Button;
  generate_cross_platform_reader_cpp : Button;  
  generate_cross_platform_writer : Button;
  generate_cpp_code : Button;
  button1 : Button;
  generate_pcu_read_visitor : Button;
  panel1 : Panel;
  panel2 : Panel;
  
  
    procedure open_Click(sender: Object; e: EventArgs);
    procedure save_as_Click(sender: Object; e: EventArgs);
    procedure save_Click(sender: Object; e: EventArgs);
    
    procedure generate_visualizator_cpp_Click(sender: Object; e: EventArgs);
    procedure generate_cross_platform_reader_cpp_Click(sender: Object; e: EventArgs);
    procedure generate_cpp_code_Click(sender: Object; e: EventArgs);
    procedure button1_Click_1(sender: Object; e: EventArgs);
    procedure generate_pcu_read_visitor_Click(sender: Object; e: EventArgs);
    
    procedure Form1_Load(sender: Object; e: EventArgs);

  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;

    procedure InitializeComponent;
    begin
        self.Text := 'Form1';
        
        // 
        open := new Button();
        save_as := new Button();
        save := new Button();
        panel1 := new Panel();
        
        panel2 := new Panel();
        generate_visualizator_cpp := new Button();
        generate_cross_platform_reader_cpp := new Button();
        generate_cross_platform_writer := new Button();
        generate_cpp_code := new Button();
        button1 := new Button();
        generate_pcu_read_visitor := new Button();

        // 
        // open
        // 
        open.Location := new System.Drawing.Point(10, 9);   // 위치 설정
        open.Name := 'open';                                 // 이름 설정
        open.Size := new System.Drawing.Size(182, 27);       // 크기 설정
        open.TabIndex := 5;                                  // Tab 인덱스 설정  
        open.Text := 'Open'; //"Открыть";                  // 텍스트 설정
        open.Click += open_Click;                            // Click 이벤트 헨들러 추가   
        
        // 
        // save_as
        // 
        save_as.Location := new System.Drawing.Point(10, 83);   // 위치 설정
        save_as.Name := 'save_as';                                 // 이름 설정
        save_as.Size := new System.Drawing.Size(182, 27);       // 크기 설정
        save_as.TabIndex := 1;                                  // Tab 인덱스 설정  
        save_as.Text := 'Save As'; //"Сохранить как";              // 텍스트 설정
        save_as.Click += save_as_Click;                            // Click 이벤트 헨들러 추가   
        
        // 
        // save
        // 
        save.Location := new System.Drawing.Point(10, 46);   // 위치 설정
        save.Name := 'save';                                 // 이름 설정
        save.Size := new System.Drawing.Size(182, 27);       // 크기 설정
        save.TabIndex := 1;                                  // Tab 인덱스 설정  
        save.Text := 'Save'; //"Сохранить";                  // 텍스트 설정
        save.Click += save_Click;                            // Click 이벤트 헨들러 추가   





        // 
        // panel1
        // 
        panel1.BorderStyle := System.Windows.Forms.BorderStyle.FixedSingle;
        panel1.Controls.Add(open);
        panel1.Controls.Add(save_as);
        panel1.Controls.Add(save);
        
        panel1.Location := new System.Drawing.Point(586, 246);
        panel1.Name := 'panel1';
        panel1.Size := new System.Drawing.Size(201, 120);
        panel1.TabIndex := 10;

        // 
        // panel2
        // 
        panel2.BorderStyle := System.Windows.Forms.BorderStyle.FixedSingle;
        panel2.Controls.Add(generate_visualizator_cpp);
        panel2.Controls.Add(generate_cross_platform_reader_cpp);
        panel2.Controls.Add(generate_cross_platform_writer);
        panel2.Controls.Add(generate_cpp_code);
        panel2.Controls.Add(button1);
         
        panel2.Location := new System.Drawing.Point(586, 9);
        panel2.Name := 'panel2';
        panel2.Size := new System.Drawing.Size(384, 231);
        panel2.TabIndex := 11;
        
        // 
        // generate_visualizator_cpp
        // 
        generate_visualizator_cpp.Location := new System.Drawing.Point(199, 90);   // 위치 설정
        generate_visualizator_cpp.Name := 'generate_visualizator_cpp';                                 // 이름 설정
        generate_visualizator_cpp.Size := new System.Drawing.Size(167, 40);       // 크기 설정
        generate_visualizator_cpp.TabIndex := 16;                                  // Tab 인덱스 설정  
        generate_visualizator_cpp.Text := 'Generate cpp visualizer'; //"Генерировать cpp-визуализатор";                  // 텍스트 설정
        generate_visualizator_cpp.UseVisualStyleBackColor := true;
        generate_visualizator_cpp.Click += generate_visualizator_cpp_Click;                            // Click 이벤트 헨들러 추가
        
        //
        //generate_cross_platform_reader_cpp
        //
        generate_cross_platform_reader_cpp.Location := new System.Drawing.Point(199, 185);   // 위치 설정
        generate_cross_platform_reader_cpp.Name := 'generate_cross_platform_reader_cpp';                                 // 이름 설정
        generate_cross_platform_reader_cpp.Size := new System.Drawing.Size(167, 40);       // 크기 설정
        generate_cross_platform_reader_cpp.TabIndex := 15;                                  // Tab 인덱스 설정  
        generate_cross_platform_reader_cpp.Text := 'Generate cpp visualizer'; //"Генерировать cpp-визуализатор";                  // 텍스트 설정
        generate_cross_platform_reader_cpp.UseVisualStyleBackColor := true;
        generate_cross_platform_reader_cpp.Click += generate_visualizator_cpp_Click;                            // Click 이벤트 헨들러 추가   
        
        //
        //generate_cross_platform_writer
        //
        generate_cross_platform_writer.Location := new System.Drawing.Point(199, 138);   // 위치 설정
        generate_cross_platform_writer.Name := 'generate_cross_platform_writer';                                 // 이름 설정
        generate_cross_platform_writer.Size := new System.Drawing.Size(167, 40);       // 크기 설정
        generate_cross_platform_writer.TabIndex := 14;                                  // Tab 인덱스 설정  
        generate_cross_platform_writer.Text := 'Generate cross - platform serializer'; // "Генерировать cross - platform сериализатор";   // 텍스트 설정
        generate_cross_platform_writer.UseVisualStyleBackColor := true;
        //generate_cross_platform_writer.Click += button2_Click;                            // Click 이벤트 헨들러 추가   
        

        //
        // generate_cpp_code
        //
        generate_cpp_code.Location := new System.Drawing.Point(199, 57);   // 위치 설정
        generate_cpp_code.Name := 'generate_cpp_code';                                 // 이름 설정
        generate_cpp_code.Size := new System.Drawing.Size(167, 26);       // 크기 설정
        generate_cpp_code.TabIndex := 13;                                  // Tab 인덱스 설정  
        generate_cpp_code.Text := 'Generate C++ code'; //  "Генерировать C++ код";   // 텍스트 설정
        generate_cpp_code.UseVisualStyleBackColor := true;
        generate_cpp_code.Click += generate_cpp_code_Click;                            // Click 이벤트 헨들러 추가   

 
        // 
        // button1
        // 
        button1.Font := new System.Drawing.Font('Microsoft Sans Serif', 8.25, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
        button1.Location := new System.Drawing.Point(10, 9);
        button1.Name := 'button1';
        button1.Size := new System.Drawing.Size(182, 36);
        button1.TabIndex := 12;
        button1.Text := 'Generate all';//"Сгенерировать все";
        button1.UseVisualStyleBackColor := true;
        button1.Click += button1_Click_1;
        
        //
        //generate_pcu_read_visitor
        //
        generate_pcu_read_visitor.Location := new System.Drawing.Point(10, 185);
        generate_pcu_read_visitor.Name := 'generate_pcu_read_visitor';
        generate_pcu_read_visitor.Size := new System.Drawing.Size(182, 40);
        generate_pcu_read_visitor.TabIndex := 11;
        generate_pcu_read_visitor.Text := 'Generate pcu deserializer';//"Генерировать pcu-десериализатор";
        generate_pcu_read_visitor.UseVisualStyleBackColor := true;
        generate_pcu_read_visitor.Click += generate_pcu_read_visitor_Click;       
        
        //
        // Form1
        //
        self.AutoScaleBaseSize := new System.Drawing.Size(6,15);
        self.ClientSize := new System.Drawing.Size(978, 421);
        
        self.Controls.Add(Panel2);
        self.Controls.Add(Panel1);
        
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.Fixed3D;
        self.MaximizeBox := false;
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'PascalABC.NET: syntax tree generator v1.5(c) Vodolazov N., Tkachuk A.V., Ivanov S' +
            '.O., 2007 ';
        self.Load += Form1_Load;
        
        self.panel1.ResumeLayout(false);
        
        self.ResumeLayout(false);


    end;
    
    
  end;

implementation


procedure Form1.open_Click(sender: Object; e: EventArgs);
begin
  //self.Close; // 폼닫기 명령어
end;

procedure Form1.save_as_Click(sender: Object; e: EventArgs);
begin
  //self.Close; // 폼닫기 명령어
end;

procedure Form1.save_Click(sender: Object; e: EventArgs);
begin
  //self.Close; // 폼닫기 명령어
end;

procedure Form1.generate_visualizator_cpp_Click(sender: Object; e: EventArgs);
begin
  //self.Close; // 폼닫기 명령어
end;

procedure Form1.generate_cross_platform_reader_cpp_Click(sender: Object; e: EventArgs);
begin
  //self.Close; // 폼닫기 명령어
end;
procedure Form1.generate_cpp_code_Click(sender: Object; e: EventArgs);
begin
  //self.Close; // 폼닫기 명령어
end;


procedure Form1.button1_Click_1(sender: Object; e: EventArgs);
begin
  //없음
end;

procedure Form1.generate_pcu_read_visitor_Click(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
  // 없음
end;

end.

