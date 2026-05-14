#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWEBaseEditAction.h"
#include "UWEUnlockCellsEditAction.generated.h"

class AUWESculpturalBaseActor;
class UUWEUnlockCellsEditAction;

UCLASS(BlueprintType)
class UWESCULPTURALBASE_API UUWEUnlockCellsEditAction : public UObject, public IUWEBaseEditAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    int32 LockID;
    
public:
    UUWEUnlockCellsEditAction();

    UFUNCTION(BlueprintCallable)
    static UUWEUnlockCellsEditAction* Create(AUWESculpturalBaseActor* base, int32 NewLockID);
    

    // Fix for true pure virtual functions not being implemented
};

