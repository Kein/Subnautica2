#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "UWEActorDataStatics.generated.h"

class AUWEActorDataGroup;
class UObject;

UCLASS(BlueprintType)
class UWEGLOBALACTORDATA_API UUWEActorDataStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEActorDataStatics();

    UFUNCTION(BlueprintCallable)
    static void SetFloatValue(FGameplayTag ActorDataGroupId, FGameplayTag FieldIdentifier, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoolValue(FGameplayTag ActorDataGroupId, FGameplayTag FieldIdentifier, bool Value);
    
    UFUNCTION(BlueprintPure)
    static float GetFloatValue(FGameplayTag ActorDataGroupId, FGameplayTag FieldIdentifier, bool& Valid);
    
    UFUNCTION(BlueprintPure)
    static bool GetBoolValue(FGameplayTag ActorDataGroupId, FGameplayTag FieldIdentifier, bool& Valid);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AUWEActorDataGroup* GetActorDataGroup(const UObject* WorldContextObject, FGameplayTag Identifier);
    
};

