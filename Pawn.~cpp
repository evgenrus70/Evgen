//---------------------------------------------------------------------------


#pragma hdrstop

#include "Pawn.h"
#include "UStep.h"
#include "UGame.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)

bool TPawn :: CheckStep ()
{
   if ( NotReverseStep() )
 {

if ( PawnStep() || PawnBeat() )
        return true;
 else
        return false;

  }
  else return false;

}

bool TPawn :: NotReverseStep()
{
 TStep Step;
 if ( Game->Flag == 0  && ( Step.FirstPosition.XPos  < Step.LastPosition.XPos  ) ||
      Game->Flag == 1  && ( Step.FirstPosition.YPos >  Step.LastPosition.YPos ) )
  return false;
  else
 return true;
}

bool TPawn :: PawnBeat()
{
  TStep Step;
  if ( abs( Step.FirstPosition.XPos - Step.LastPosition.XPos )==1 &&
       abs (Step.FirstPosition.YPos - Step.LastPosition.YPos) ==1   )
    return true;
    else
    return false;

}

bool TPawn ::PawnStep()
{
  TStep Step;

   if ( Step.FirstPosition.YPos == 6 || Step.FirstPosition.YPos == 1 )
  {
if (  abs(Step.FirstPosition.YPos - Step.LastPosition.YPos) > 2 ||
      abs (Step.FirstPosition.XPos - Step.LastPosition.XPos) > 0  )
      return false;
      else
      return true;
   }
   else
  {
if ( Game->Flag == 0 && abs( Step.FirstPosition.YPos - Step.LastPosition.YPos)  != 1  ||
     Game->Flag == 1 && abs( Step.LastPosition.YPos - Step.FirstPosition.YPos ) != 1  ||
     abs(Step.FirstPosition.XPos - Step.LastPosition.XPos ) > 0 )
     return false;
      else
      return true;
   }

}



