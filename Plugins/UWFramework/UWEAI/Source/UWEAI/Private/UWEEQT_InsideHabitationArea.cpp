#include "UWEEQT_InsideHabitationArea.h"

UUWEEQT_InsideHabitationArea::UUWEEQT_InsideHabitationArea() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->CheckCurrentHabitationArea = true;
}


