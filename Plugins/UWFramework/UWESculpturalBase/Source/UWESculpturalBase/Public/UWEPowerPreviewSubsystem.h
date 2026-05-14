#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWEPowerPreviewSubsystem.generated.h"

class UNiagaraComponent;

UCLASS(BlueprintType)
class UWESCULPTURALBASE_API UUWEPowerPreviewSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    TArray<UNiagaraComponent*> BeamPool;
    
public:
    UUWEPowerPreviewSubsystem();

    UFUNCTION(BlueprintCallable)
    void AddPreviewForOneFrame(const FVector& WorldStart, const FVector& WorldEnd);
    
    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UUWEPowerPreviewSubsystem, STATGROUP_Tickables); }
};

