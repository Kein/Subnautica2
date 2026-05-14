#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SentryBeforeBreadcrumbHandler.generated.h"

class USentryBreadcrumb;
class USentryHint;

UCLASS(Abstract, Blueprintable)
class SENTRY_API USentryBeforeBreadcrumbHandler : public UObject {
    GENERATED_BODY()
public:
    USentryBeforeBreadcrumbHandler();

    UFUNCTION(BlueprintNativeEvent)
    USentryBreadcrumb* HandleBeforeBreadcrumb(USentryBreadcrumb* Breadcrumb, USentryHint* Hint);
    
};

