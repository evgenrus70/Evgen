//---------------------------------------------------------------------------


#pragma hdrstop


#include "UFigure.h"

//---------------------------------------------------------------------------
AnsiString TFigure::GetColor (int Tag)
{
 AnsiString Color;
 if ( Tag <= 16 )
   Color = "white";
 if ( Tag > 16 && Tag <= 32 )
   Color = "black";

 return  Color;
}


#pragma package(smart_init)
 