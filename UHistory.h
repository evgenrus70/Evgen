//---------------------------------------------------------------------------

#ifndef UHistoryH
#define UHistoryH

#include "UStep.h"

//---------------------------------------------------------------------------
class THistory
{
    
    TStep *HistoryOfSteps;
    void AddStep(TStep);
    void GetStepsList();

};
#endif
