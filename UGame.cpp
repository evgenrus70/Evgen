//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UGame.h"
#include "UAboutBox.h"
#include "UMode.h"
#include "Unit4.h"
#include "UBoard.h"



#include <clipbrd.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TGame *Game;
TBoard ChessBoard;
TBoard Figures;
TStep Step;


//---------------------------------------------------------------------------
__fastcall TGame::TGame(TComponent* Owner)
        : TForm(Owner)
{
    this->CreateGame();
}
//---------------------------------------------------------------------------
void TGame :: CreateGame()
{


     for ( int i = 2; i < 6; i++ )
     for ( int j =0 ; j < 8; j++ )
       ChessBoard.Image[i][j] = NULL;

ChessBoard.Image[0][0] = BLRook; ChessBoard.Image[0][1] = BLHorse; ChessBoard.Image[0][2] = BLBishop;ChessBoard.Image[0][3] =  BQueen;
ChessBoard.Image[0][4] = BKing;  ChessBoard.Image[0][5] = BRBishop;ChessBoard.Image[0][6] = BRHorse; ChessBoard.Image[0][7] =  BRRook;
ChessBoard.Image[1][0] = BAPawn; ChessBoard.Image[1][1] = BBPawn;  ChessBoard.Image[1][2] = BCPawn;  ChessBoard.Image[1][3] =  BDPawn;
ChessBoard.Image[1][4] = BEPawn; ChessBoard.Image[1][5] = BFPawn;  ChessBoard.Image[1][6] = BGPawn;  ChessBoard.Image[1][7] =  BHPawn;

ChessBoard.Image[6][0] = WAPawn;ChessBoard.Image[6][1] = WBPawn;  ChessBoard.Image[6][2] = WCPawn;  ChessBoard.Image[6][3] = WDPawn;
ChessBoard.Image[6][4] = WEPawn;ChessBoard.Image[6][5] = WFPawn;  ChessBoard.Image[6][6] = WGPawn;  ChessBoard.Image[6][7] = WHPawn;
ChessBoard.Image[7][0] = WLRook;ChessBoard.Image[7][1] = WLHorse; ChessBoard.Image[7][2] = WLBishop;ChessBoard.Image[7][3] = WQueen;
ChessBoard.Image[7][4] = WKing; ChessBoard.Image[7][5] = WRBishop;ChessBoard.Image[7][6] = WRHorse; ChessBoard.Image[7][7] = WRRook;

 


if ( Mode->Colors->ItemIndex == 1 )
{
TImage *Temp;
int j;

for ( int i = 0,j = 3;i < 8; i+=7 )
      {
        Temp = ChessBoard.Image[i][j];
        ChessBoard.Image[i][j] = ChessBoard.Image[i][j+1];
        ChessBoard.Image[i][j+1] = Temp;

      }

  for ( int i = 0; i < 2; i++ )
  {
        for (int j = 0; j < 8; j++ )
      {
         Temp = ChessBoard.Image[i][j];
         ChessBoard.Image[i][j] = ChessBoard.Image[7-i][j];
         ChessBoard.Image[7-i][j] = Temp;
       }
  }

  for ( int j = 0; j <8 ; j++ )
{
 ChessBoard.Image[0][j]->Top = 32;
 ChessBoard.Image[1][j]->Top = 72;
 ChessBoard.Image[6][j]->Top = 272;
 ChessBoard.Image[7][j]->Top = 312;
}
  WQueen->Left = 192;
  BQueen->Left = WQueen->Left;
  WKing->Left = 152;
  BKing->Left = WKing->Left;
}


   this->Initialize();
  //Edit1->Text = "            ����� ��������          " ;
}
void TGame::Initialize()
{



        Step.StepsCount = 0;
        Flag = 0;
        WKingSteps = BKingSteps = 0;
        NullTag = 33;
}
void TGame:: DrawSelect( int X, int Y, TColor Color )
{
    Canvas->Pen->Color = Color;
    Canvas->Pen->Width = 2;
    Canvas->MoveTo ( X*40+32 , Y*40+32 );
    Canvas->LineTo ( X*40+72 , Y*40+32 );
    Canvas->LineTo ( X*40+72 , Y*40+72 );
    Canvas->LineTo ( X*40+32 , Y*40+72 );
    Canvas->LineTo ( X*40+32 , Y*40+32 );
}

void __fastcall TGame::FormClose(TObject *Sender, TCloseAction &Action)
{
Mode->Close();
}

void TGame :: SendCoord ( )
{
    char Data[4];


    if ( ServerSocket1->Active )
        ServerSocket1->Socket->Connections[0]->
        SendBuf( (void*) Data, sizeof( Data ) );

    else
        ClientSocket1->Socket->
        SendBuf( (void*) Data, sizeof( Data ) );
}

void TGame::MakeStep (TStep Step)
{

 ChessBoard.Image[Step.FirstPosition.YPos][Step.FirstPosition.XPos]->Left = Step.LastPosition.XPos*40 + 32;
 ChessBoard.Image[Step.FirstPosition.YPos][Step.FirstPosition.XPos]->Top =  Step.LastPosition.YPos*40 + 32;

 }

//---------------------------------------------------------------------------

void __fastcall TGame::ServerSocket1ClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
/*
 Memo2->Lines->Add(Socket->ReceiveText()) ;
 int   Size;
    char* Buffer;

    Size = Socket->ReceiveLength( );
    Buffer = new char[ Size ];
    Socket->ReceiveBuf( (void*) Buffer, Size );


    ThisX =  Buffer[0];
    ThisY =  Buffer[1];
    NewX  =  Buffer[2];
    NewY  =  Buffer[3];

    delete [] Buffer;

    Game->Step(Step);
    Board->Enabled = true;
    */
}
//---------------------------------------------------------------------------


void __fastcall TGame::ClientSocket1Read(TObject *Sender,
      TCustomWinSocket *Socket)
{
Memo2->Lines->Add(Socket->ReceiveText()) ;
}
//---------------------------------------------------------------------------

void __fastcall TGame::ExitClick(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------



void __fastcall TGame::AboutClick(TObject *Sender)
{
Application->CreateForm(__classid(TAboutBox), &AboutBox);
  AboutBox->ShowModal();
  AboutBox->Free();
}
//---------------------------------------------------------------------------





void __fastcall TGame::BoardMouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{

   TField Field;
   TBoard Board;

   Step.StepsCount++;

   if  ( Step.StepsCount == 1 )
  {

   Field.XPos = div(X-32,40).quot;
   Field.YPos = div(Y-32,40).quot;

  if ( ChessBoard.Image[Field.YPos][Field.XPos]!= NULL  )
  {
   TFigure Figure;
   AnsiString Color =  Figure.GetColor(ChessBoard.Image[Field.YPos][Field.XPos]->Tag);

    if (  Flag == 0 && (Color == "white")  || Flag == 1 && (Color == "black") )
    {
     Step.FirstPosition =  Field;
     this->DrawSelect( Field.XPos, Field.YPos, clGreen);
    }  else Step.StepsCount = 0;
   }  else Step.StepsCount = 0;
  }

  if ( Step.StepsCount == 2 )
{
   Field.XPos = div(X-32,40).quot;
   Field.YPos = div(Y-32,40).quot;

  if ( ChessBoard.Image[Field.YPos][Field.XPos] == NULL )
 {
   this->DrawSelect( Field.XPos, Field.YPos, clPurple);
   Step.LastPosition =  Field;

   MakeStep (Step);
   ChangeStep();
   Step.StepsCount = 0;
  }


 }
   Edit1->Text =  Figures.Figure[Step.FirstPosition.YPos][Step.FirstPosition.XPos].Color + IntToStr(Step.StepsCount);

}
//---------------------------------------------------------------------------
void TGame:: ChangeStep()
{
if ( Flag == 0 )
 {
  Edit1->Text = "                 ��� ������          ";
  Flag = 1;
 }
  else
 {
 Edit1->Text = "                 ��� �����         ";
  Flag = 0;
 }
}
