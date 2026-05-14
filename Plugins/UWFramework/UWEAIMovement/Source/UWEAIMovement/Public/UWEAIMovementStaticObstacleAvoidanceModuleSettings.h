#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEAIMovementAuxiliaryModuleSettings.h"
#include "UWEAIMovementStaticObstacleAvoidanceModuleSettings.generated.h"

class UUWEAIMovementStaticObstacleAvoidanceModuleProfile;

UCLASS()
class UWEAIMOVEMENT_API UUWEAIMovementStaticObstacleAvoidanceModuleSettings : public UUWEAIMovementAuxiliaryModuleSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TMap<FGameplayTag, UUWEAIMovementStaticObstacleAvoidanceModuleProfile*> Profiles;
    
    UUWEAIMovementStaticObstacleAvoidanceModuleSettings();

};

