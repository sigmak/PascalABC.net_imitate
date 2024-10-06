//namespace VisualPascalABC; // 아직 사용법을 모르겠음.
unit uVisualStates;  

// 2024.10.06
// 파일명을 VisualStates.pas 로 하면 VisualStates = class 선언시 중복 오류발생해서
// 파일명 앞에 u를 붙이게 되었음. 
interface

type
  VisualStates = class
  public
    FileOpened: boolean := false;
  end;

implementation

end.