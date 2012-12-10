//---------------------------------------------------------------------------

#ifndef UModeH
#define UModeH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TMode : public TForm
{
__published:	// IDE-managed Components
        TLabel *IPAdress;
        TLabel *PortNumb;
        TLabel *Port;
        TButton *Begin;
        TRadioGroup *Mode;
        TEdit *IP;
        TRadioGroup *Colors;
        TButton *Button1;
        void __fastcall BeginClick(TObject *Sender);
        void __fastcall ModeClick(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        void __fastcall TurnBoard();
        AnsiString GetIPAdress();
        
       

        __fastcall TMode(TComponent* Owner);

};
//---------------------------------------------------------------------------
extern PACKAGE TMode *Mode;
//---------------------------------------------------------------------------
#endif
