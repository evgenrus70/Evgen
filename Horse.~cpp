//---------------------------------------------------------------------------


#pragma hdrstop

#include "Horse.h"
#include "UStep.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)

bool THorse :: CheckStep ()
{
    TStep Step;
   if ( ( abs( Step.LastPosition.XPos - Step.FirstPosition.XPos) == 1 &&
          abs( Step.LastPosition.YPos - Step.FirstPosition.YPos) == 2 ) ||
         ( abs ( Step.LastPosition.XPos - Step.FirstPosition.XPos) == 2 &&
           abs( Step.LastPosition.YPos - Step.FirstPosition.YPos) == 1) )
      return true;
      else

      return false;
}
