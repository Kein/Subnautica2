#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWEAIMovementComponentGlobalSettings.generated.h"

class UUWEAIMovementEnvironmentSettings;

UCLASS()
class UWEAIMOVEMENT_API UUWEAIMovementComponentGlobalSettings : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FixedDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ActorUpdateTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ActorUpdateTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxIterationCountPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnforceSweepTestAtProximityToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EnforceSweepTestDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector GravityAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TMap<FGameplayTag, UUWEAIMovementEnvironmentSettings*> EnvironmentSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag DefaultEnvironment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag NoVolumeEnvironment;
    
    UUWEAIMovementComponentGlobalSettings();

};

