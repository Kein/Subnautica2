#pragma once
#include "CoreMinimal.h"
#include "ConfigureSettingsDelegateDelegate.generated.h"

class USentrySettings;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FConfigureSettingsDelegate, USentrySettings*, Settings);

