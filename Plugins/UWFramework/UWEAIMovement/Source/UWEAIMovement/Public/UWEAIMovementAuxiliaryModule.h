#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWEAIMovementAuxiliaryModule.generated.h"

class UUWEAIMovementAuxiliaryModuleSettings;
class UUWEAIMovementBaseSettings;
class UUWEAIMovementComponentGlobalSettings;

UCLASS(Abstract, BlueprintType)
class UWEAIMOVEMENT_API UUWEAIMovementAuxiliaryModule : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    UUWEAIMovementComponentGlobalSettings* GlobalSettings;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    UUWEAIMovementBaseSettings* BaseSettings;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    UUWEAIMovementAuxiliaryModuleSettings* LocalSettings;
    
public:
    UUWEAIMovementAuxiliaryModule();

};

