#pragma once
#include "CoreMinimal.h"
#include "ConfigureScopeDelegateDelegate.generated.h"

class USentryScope;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FConfigureScopeDelegate, USentryScope*, Scope);

