#pragma once
#include "CoreMinimal.h"
#include "UWEGameplayAttributeSaveData.generated.h"

USTRUCT(BlueprintType)
struct FUWEGameplayAttributeSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FString Name;
    
    UPROPERTY(SaveGame)
    float BaseValue;
    
    UPROPERTY(SaveGame)
    float CurrentValue;
    
    UWEABILITYSYSTEM_API FUWEGameplayAttributeSaveData();
};

