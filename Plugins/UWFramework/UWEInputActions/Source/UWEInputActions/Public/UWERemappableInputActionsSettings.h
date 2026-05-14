#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UWERemappableInputActionsSettings.generated.h"

class UInputMappingContext;

UCLASS(Config=Input)
class UWEINPUTACTIONS_API UUWERemappableInputActionsSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<TSoftObjectPtr<UInputMappingContext>> InputMappings;
    
    UUWERemappableInputActionsSettings();

};

