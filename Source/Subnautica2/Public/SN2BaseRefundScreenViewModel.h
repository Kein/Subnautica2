#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "UWECellUpdateList.h"
#include "SN2BaseRefundScreenViewModel.generated.h"

class AUWESculpturalBaseActor;
class UObject;
class USN2RefundableBaseViewModel;
class UUWESculpturalBaseWorldSubsystem;

UCLASS()
class SUBNAUTICA2_API USN2BaseRefundScreenViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UUWESculpturalBaseWorldSubsystem* BaseSubsystem;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<USN2RefundableBaseViewModel*> RefundableBases;
    
public:
    USN2BaseRefundScreenViewModel();

    UFUNCTION(BlueprintCallable)
    void UpdateRegistedBases();
    
    UFUNCTION()
    void OnAnyBaseChanged(AUWESculpturalBaseActor* base, const FUWECellUpdateList& CellUpdates);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void Initialize(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void Deinitialize();
    
};

