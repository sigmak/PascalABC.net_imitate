Unit uTest;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure Form1_Load(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource uTest.Form1.resources}
    tableLayoutPanel1: TableLayoutPanel;
    label1: &Label;
    {$include uTest.Form1.inc}
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
  label1.Font := new FontFamily('굴림');
end;

end.
