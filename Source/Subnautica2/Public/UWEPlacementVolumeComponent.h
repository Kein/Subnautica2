#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GameplayTagContainer.h"
#include "UWEPlacementVolumeComponent.generated.h"

class UBoxComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API UUWEPlacementVolumeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UBoxComponent* Box;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ObjectsChecked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseForSamplePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideBlockedReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag BlockingReason;
    
    UUWEPlacementVolumeComponent(const FObjectInitializer& ObjectInitializer);

};

