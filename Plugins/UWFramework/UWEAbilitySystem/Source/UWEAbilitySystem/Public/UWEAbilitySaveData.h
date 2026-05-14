#pragma once
#include "CoreMinimal.h"
#include "UWEAbilitySaveData.generated.h"

USTRUCT(BlueprintType)
struct FUWEAbilitySaveData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FString AbilityClassPathName;
    
    UPROPERTY(SaveGame)
    bool bIsActive;
    
    UWEABILITYSYSTEM_API FUWEAbilitySaveData();
};

