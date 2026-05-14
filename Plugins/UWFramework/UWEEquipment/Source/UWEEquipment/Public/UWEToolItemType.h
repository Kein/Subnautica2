#pragma once
#include "CoreMinimal.h"
#include "UWEEquippableItemType.h"
#include "UWEToolItemType.generated.h"

UCLASS(EditInlineNew)
class UWEEQUIPMENT_API UUWEToolItemType : public UUWEEquippableItemType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsEnergyTool;
    
    UUWEToolItemType();

};

