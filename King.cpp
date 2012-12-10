//---------------------------------------------------------------------------


#pragma hdrstop

#include "King.h"
#include "UStep.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)

bool TKing :: CheckStep ()
{
   TStep Step;
  if ( abs(Step.FirstPosition.XPos - Step.LastPosition.XPos) > 1 ||
       abs(Step.FirstPosition.YPos - Step.FirstPosition.YPos) > 1 )
 {
    return false;
 }
  else
  return true;

}