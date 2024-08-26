Unit fChild;
//uses System, System.Collections.Generic, System.ComponentModel, System.Data, System.Drawing, System.Text, System.Windows.Forms, WeifenLuo.WinFormsUI.Docking;
uses System, System.ComponentModel, System.Data, System.Drawing, System.Text, System.Windows.Forms, WeifenLuo.WinFormsUI.Docking;

type
  FormChild = class(DockContent)
  public
    constructor Create;
    begin
      inherited Create;
      InitializeComponent;
    end;
    
    procedure InitializeComponent;
    begin
      // 컴포넌트 초기화 코드 작성
      
    end;
    
    // 폼을 보이게 하는 public 메서드
    procedure ShowForm;
    begin
      self.Show;
    end;
    
    // 폼을 숨기는 public 메서드
    procedure HideForm;
    begin
      self.Hide;
    end;
    
  end;

begin
end.
