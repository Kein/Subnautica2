#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UWEBaseEditAction.h"
#include "UWETransferLockedCellsOwnerEditAction.generated.h"

class AUWESculpturalBaseActor;
class UUWETransferLockedCellsOwnerEditAction;

UCLASS(BlueprintType)
class UWESCULPTURALBASE_API UUWETransferLockedCellsOwnerEditAction : public UObject, public IUWEBaseEditAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    int32 LockID;
    
    UPROPERTY(BlueprintReadWrite)
    FGuid NewOwner;
    
    UPROPERTY(BlueprintReadWrite)
    FGuid OldOwner;
    
    UPROPERTY(BlueprintReadWrite)
    bool ShouldBeHardLock;
    
    UPROPERTY(BlueprintReadWrite)
    int32 AssociatedInventoryID;
    
public:
    UUWETransferLockedCellsOwnerEditAction();

    UFUNCTION(BlueprintCallable)
    static UUWETransferLockedCellsOwnerEditAction* Create(AUWESculpturalBaseActor* base, int32 NewLockID, FGuid NewNewOwner, bool NewShouldBeHardLock, int32 NewAssociatedInventoryID);
    

    // Fix for true pure virtual functions not being implemented
};

