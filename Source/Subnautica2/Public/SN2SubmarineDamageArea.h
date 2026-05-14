#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/BoxComponent.h"
#include "GameplayTagContainer.h"
#include "SN2SubmarineDamageArea.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2SubmarineDamageArea : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag SubsystemTag;
    
    USN2SubmarineDamageArea(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsPointInside(const FVector& Location) const;
    
};

