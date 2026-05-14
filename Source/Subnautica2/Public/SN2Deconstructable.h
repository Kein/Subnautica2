#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "UWESculpturalBaseCellCost.h"
#include "SN2Deconstructable.generated.h"

class ASN2BuilderTool;

UINTERFACE(Blueprintable)
class USN2Deconstructable : public UInterface {
    GENERATED_BODY()
};

class ISN2Deconstructable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    bool ShouldDeconstructInstantly();
    
    UFUNCTION(BlueprintNativeEvent)
    void PreDeconstruct(ASN2BuilderTool* BuilderTool);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool GetDeconstructCostOverride(TArray<FUWESculpturalBaseCellCost>& Costs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeDeconstructed(FGameplayTag& CantDeconstructReason);
    
};

