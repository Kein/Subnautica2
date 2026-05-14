#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EquipmentSlot.generated.h"

USTRUCT(BlueprintType)
struct FEquipmentSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag SlotTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SocketName;
    
    UWEINVENTORY_API FEquipmentSlot();
};

