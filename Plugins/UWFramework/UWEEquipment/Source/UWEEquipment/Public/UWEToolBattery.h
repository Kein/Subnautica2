#pragma once
#include "CoreMinimal.h"
#include "UWEToolBattery.generated.h"

class UStaticMesh;
class UUWEItemType;

USTRUCT(BlueprintType)
struct FUWEToolBattery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UUWEItemType> ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> Mesh;
    
    UWEEQUIPMENT_API FUWEToolBattery();
};

