#pragma once
#include "CoreMinimal.h"
#include "SentryBeforeSendHandler.h"
#include "ScopeTestBeforeSendHandler.generated.h"

UCLASS()
class UScopeTestBeforeSendHandler : public USentryBeforeSendHandler {
    GENERATED_BODY()
public:
    UScopeTestBeforeSendHandler();

};

