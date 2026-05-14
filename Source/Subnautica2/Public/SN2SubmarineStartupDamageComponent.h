#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SN2SubmarineStartupDamageComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2SubmarineStartupDamageComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Damage;
    
    USN2SubmarineStartupDamageComponent(const FObjectInitializer& ObjectInitializer);

};

