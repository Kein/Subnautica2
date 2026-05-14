#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEBreakableBase.h"
#include "UWEResonatableData.generated.h"

class AActor;
class UUWEResonatableData;

UCLASS(EditInlineNew)
class UWEBREAKABLE_API UUWEResonatableData : public UUWEBreakableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFloatRange ResonateRange;
    
    UUWEResonatableData();

    UFUNCTION(BlueprintPure)
    bool IsInResonateRange(float Frequency) const;
    
    UFUNCTION(BlueprintPure)
    static UUWEResonatableData* GetResonatableDataForActor(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    bool CanResonate(AActor* InstigatorActor, float Frequency) const;
    
};

