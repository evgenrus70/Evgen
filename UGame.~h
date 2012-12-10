//---------------------------------------------------------------------------

#ifndef UGameH
#define UGameH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <Menus.hpp>
#include <ScktComp.hpp>
#include <Grids.hpp>
#include <Psock.hpp>
#include "UStep.h"

//---------------------------------------------------------------------------
class TGame : public TForm
{
__published:	// IDE-managed Components
        TImage *Board;
        TImage *WLRook;
        TImage *WRRook;
        TImage *WLHorse;
        TImage *WRHorse;
        TImage *WLBishop;
        TImage *WRBishop;
        TImage *WKing;
        TImage *WQueen;
        TImage *BLHorse;
        TImage *BLBishop;
        TImage *BLRook;
        TImage *BRRook;
        TImage *BRHorse;
        TImage *BRBishop;
        TImage *BQueen;
        TImage *BKing;
        TImage *WAPawn;
        TImage *WBPawn;
        TImage *WCPawn;
        TImage *WDPawn;
        TImage *WEPawn;
        TImage *WFPawn;
        TImage *WGPawn;
        TImage *WHPawn;
        TImage *BAPawn;
        TImage *BBPawn;
        TImage *BCPawn;
        TImage *BDPawn;
        TImage *BEPawn;
        TImage *BFPawn;
        TImage *BGPawn;
        TImage *BHPawn;
        TImage *Null_Image;
        TServerSocket *ServerSocket1;
        TClientSocket *ClientSocket1;
        TMainMenu *MainMenu1;
        TMenuItem *Play;
        TMainMenu *MainMenu2;
        TMemo *Memo1;
        TPowersock *Powersock1;
        TButton *Button1;
        TEdit *Edit2;
        TMemo *Memo2;
        TLabel *Label1;
        TLabel *Label2;
        TMenuItem *Save;
        TMenuItem *Exit;
        TMenuItem *About;
        TEdit *Edit1;
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);

        void __fastcall ServerSocket1ClientRead(TObject *Sender,
          TCustomWinSocket *Socket);

        void __fastcall ClientSocket1Read(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall ExitClick(TObject *Sender);
        void __fastcall AboutClick(TObject *Sender);
        void __fastcall BoardMouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
private:	// User declarations
public:		// User declarations

      
      int  Flag;
      int WKingSteps,BKingSteps,NullTag ;

      void MakeStep(TStep);
      void CreateGame();
      void Initialize();
      void DrawSelect( int , int , TColor );
      void SendCoord();
      void ChooseFigure();
      void ChangeStep();



        __fastcall TGame(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TGame *Game;
//---------------------------------------------------------------------------
#endif
