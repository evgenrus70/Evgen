//---------------------------------------------------------------------------


#pragma hdrstop

#include "Bishop.h"
#include "UStep.h"
#include "UBoard.h"
//---------------------------------------------------------------------------

#pragma package(smart_init)
TBoard ChessBoard;
bool TBishop :: CheckStep ()
{
  TStep Step;
  if ( abs (Step.FirstPosition.YPos - Step.LastPosition.YPos) == abs (Step.FirstPosition.XPos - Step.LastPosition.XPos ) )
 {
   if ( Step.LastPosition.YPos > Step.FirstPosition.YPos )
     {
       if (Step.LastPosition.XPos > Step.FirstPosition.XPos )
       {
         for ( int i = Step.FirstPosition.YPos+1,j = Step.FirstPosition.XPos+1; i < Step.LastPosition.YPos, j < Step.LastPosition.XPos;i++, j++ )
         if ( ChessBoard.Image[i][j] != NULL )

           return false;

       }
       else
         for ( int i = Step.FirstPosition.YPos+1, j= Step.FirstPosition.XPos-1;i< Step.LastPosition.YPos, j > Step.FirstPosition.XPos; i++,j-- )
         if ( ChessBoard.Image[i][j] != NULL )

           return false;
     }
   else
        {
        if ( Step.LastPosition.XPos > Step.FirstPosition.XPos )
            {
             for (int i=Step.FirstPosition.YPos-1, j=Step.FirstPosition.XPos+1; i>Step.LastPosition.YPos, j<Step.FirstPosition.XPos; i--, j++ )
              if ( ChessBoard.Image[i][j]!=NULL )

                return false;

             }
        else
            for (int i=Step.FirstPosition.YPos-1, j=Step.FirstPosition.XPos-1; i>Step.LastPosition.YPos, j>Step.LastPosition.XPos; i--, j-- )
              if ( ChessBoard.Image[i][j]!=NULL )

              return false;

        }
       return true;
 }     else

       return false;

}