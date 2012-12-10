//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TChoice : public TForm
{
__published:	// IDE-managed Components
        TRadioButton *Queen;
        TRadioButton *Rook;
        TRadioButton *Bishop;
        TRadioButton *Horse;
        TButton *Choose;
        void __fastcall ChooseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TChoice(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TChoice *Choice;
//---------------------------------------------------------------------------
#endif
