#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "BuildingRequirementDisplay.h"
#include "SN2BuilderConstructionViewModel.generated.h"

class ASN2BuilderTool;
class UAbilitySystemComponent;
class UObject;

UCLASS()
class SUBNAUTICA2_API USN2BuilderConstructionViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ASN2BuilderTool* builder;
    
    UPROPERTY(Instanced)
    UAbilitySystemComponent* ASC;
    
    UPROPERTY(BlueprintReadOnly)
    float ConstructPercent;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FBuildingRequirementDisplay> BuildingRequirements;
    
    UPROPERTY(BlueprintReadOnly)
    FText ResourceText;
    
public:
    USN2BuilderConstructionViewModel();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void UpdateConstructionProgress(UObject* WorldContext);
    
};

