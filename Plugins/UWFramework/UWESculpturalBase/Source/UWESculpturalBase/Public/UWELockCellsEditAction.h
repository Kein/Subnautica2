#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UWEBaseEditAction.h"
#include "UWELockCellsEditAction.generated.h"

class AUWESculpturalBaseActor;
class UUWELockCellsEditAction;

UCLASS(BlueprintType)
class UWESCULPTURALBASE_API UUWELockCellsEditAction : public UObject, public IUWEBaseEditAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    int32 LockID;
    
    UPROPERTY(BlueprintReadWrite)
    FGuid LockOwner;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 Flags;
    
    UPROPERTY(BlueprintReadWrite)
    int32 AssociatedInventoryID;
    
public:
    UUWELockCellsEditAction();

    UFUNCTION(BlueprintCallable)
    static UUWELockCellsEditAction* Create(AUWESculpturalBaseActor* base, int32 NewLockID, FGuid NewLockOwner, uint8 NewFlags, int32 NewAssociatedInventoryID);
    

    // Fix for true pure virtual functions not being implemented
};

