#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "UWEDynamicEventsStatics.generated.h"

class UObject;
class UUWEDynamicEventDataAsset;
class UUWEDynamicEventsStateComponent;

UCLASS(BlueprintType)
class UWEDYNAMICEVENTS_API UUWEDynamicEventsStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEDynamicEventsStatics();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUWEDynamicEventsStateComponent* GetDynamicEventsStateComponent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UUWEDynamicEventDataAsset* FindDynamicEventByTag(FGameplayTag FilterTag);
    
};

