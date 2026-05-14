#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWECharacterTrackerBlueprintFunctionLibrary.generated.h"

class UObject;
class UUWECharacterTrackerSubsystem;

UCLASS(BlueprintType)
class UWECHARACTERTRACKER_API UUWECharacterTrackerBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWECharacterTrackerBlueprintFunctionLibrary();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUWECharacterTrackerSubsystem* GetCharacterTrackerSubsystem(UObject* WorldContextObject);
    
};

