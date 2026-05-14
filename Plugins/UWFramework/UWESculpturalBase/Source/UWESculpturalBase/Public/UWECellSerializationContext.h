#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWECellSerializationContext.generated.h"

class UUWEBaseModule;

USTRUCT(BlueprintType)
struct UWESCULPTURALBASE_API FUWECellSerializationContext {
    GENERATED_BODY()
public:
private:
    UPROPERTY(SaveGame)
    TArray<UUWEBaseModule*> ModuleArray;
    
    UPROPERTY(SaveGame)
    TMap<FGameplayTag, uint16> BrushTypeTagIds;
    
    UPROPERTY(SaveGame)
    TMap<uint16, FGameplayTag> BrushTypeIdTags;
    
    UPROPERTY(SaveGame)
    uint32 Version;
    
public:
    FUWECellSerializationContext();
};

