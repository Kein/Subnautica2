#pragma once
#include "CoreMinimal.h"
#include "UWEAIMovementAuxiliaryModule.h"
#include "UWEAIMovementStaticObstacleAvoidanceModule.generated.h"

class AActor;
class UUWEAIMovementStaticObstacleAvoidanceModuleProfile;
class UUWEAIMovementStaticObstacleAvoidanceModuleSettings;

UCLASS(DefaultToInstanced, EditInlineNew)
class UWEAIMOVEMENT_API UUWEAIMovementStaticObstacleAvoidanceModule : public UUWEAIMovementAuxiliaryModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    UUWEAIMovementStaticObstacleAvoidanceModuleSettings* Settings;
    
    UPROPERTY(Instanced)
    UUWEAIMovementStaticObstacleAvoidanceModuleProfile* Profile;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<AActor>> IgnoredActors;
    
public:
    UUWEAIMovementStaticObstacleAvoidanceModule();

};

