#include "SN2SuffocateCalc.h"

USN2SuffocateCalc::USN2SuffocateCalc() {
    this->RelevantAttributesToCapture.AddDefaulted(2);
    this->OxygenConsumptionPerSec = 1.00f;
    this->OxygenConsumptionPerSecBelowNominalDepth = 2.00f;
}


