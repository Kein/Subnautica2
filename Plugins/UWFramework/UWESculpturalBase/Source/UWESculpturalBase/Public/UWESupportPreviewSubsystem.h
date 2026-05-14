#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWESupportPreviewSubsystem.generated.h"

class UNiagaraComponent;

UCLASS()
class UWESCULPTURALBASE_API UUWESupportPreviewSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    TArray<UNiagaraComponent*> BeamPool;
    
    UPROPERTY()
    TMap<FIntVector, int32> NewCellToIndex;
    
public:
    UUWESupportPreviewSubsystem();

    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UUWESupportPreviewSubsystem, STATGROUP_Tickables); }
};

