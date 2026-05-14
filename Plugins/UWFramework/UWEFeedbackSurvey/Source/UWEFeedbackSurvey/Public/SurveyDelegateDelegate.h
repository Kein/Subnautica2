#pragma once
#include "CoreMinimal.h"
#include "SonarSurveyResponse.h"
#include "SurveyDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSurveyDelegate, bool, Success, TArray<FSonarSurveyResponse>, Response);

