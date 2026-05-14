#pragma once
#include "CoreMinimal.h"
#include "SentryBeforeSendHandler.h"
#include "UWEBeforeSendHandler.generated.h"

UCLASS()
class UUWEBeforeSendHandler : public USentryBeforeSendHandler {
    GENERATED_BODY()
public:
    UUWEBeforeSendHandler();

};

