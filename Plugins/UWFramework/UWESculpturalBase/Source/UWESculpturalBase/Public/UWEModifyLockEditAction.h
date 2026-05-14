#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWEBaseEditAction.h"
#include "UWEModifyLockEditAction.generated.h"

class AUWESculpturalBaseActor;
class UUWEModifyLockEditAction;

UCLASS(BlueprintType)
class UWESCULPTURALBASE_API UUWEModifyLockEditAction : public UObject, public IUWEBaseEditAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    int32 LockID;
    
    UPROPERTY(BlueprintReadWrite)
    bool ChangeLockFlags;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 Flags;
    
    UPROPERTY(BlueprintReadWrite)
    bool ChangeInventory;
    
    UPROPERTY(BlueprintReadWrite)
    int32 NewInventoryID;
    
    UPROPERTY(BlueprintReadWrite)
    bool ChangeLockedCells;
    
public:
    UUWEModifyLockEditAction();

    UFUNCTION(BlueprintCallable)
    static UUWEModifyLockEditAction* Create(AUWESculpturalBaseActor* base, int32 NewLockID, uint8 NewFlags, bool NewChangeLockFlags, bool NewChangeLockedCells, bool NewChangeInventory, int32 NewNewInventoryID);
    

    // Fix for true pure virtual functions not being implemented
};

