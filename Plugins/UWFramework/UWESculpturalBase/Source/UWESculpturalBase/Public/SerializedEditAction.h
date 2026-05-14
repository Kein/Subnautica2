#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SerializedEditAction.generated.h"

USTRUCT(BlueprintType)
struct UWESCULPTURALBASE_API FSerializedEditAction {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    UClass* EditActionClass;
    
    UPROPERTY(SaveGame)
    FGuid BaseGUID;
    
    UPROPERTY(SaveGame)
    TArray<uint8> BinaryData;
    
    FSerializedEditAction();
};

