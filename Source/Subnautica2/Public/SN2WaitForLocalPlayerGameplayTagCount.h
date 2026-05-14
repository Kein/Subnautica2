#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "SN2WaitForLocalPlayerGameplayTagCount.generated.h"

class UObject;
class USN2WaitForLocalPlayerGameplayTagCount;

UCLASS()
class SUBNAUTICA2_API USN2WaitForLocalPlayerGameplayTagCount : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSN2WaitForPlayerGameplayTagCountEvent, int32, Count);
    
    UPROPERTY(BlueprintAssignable)
    FSN2WaitForPlayerGameplayTagCountEvent OnTagCountChanged;
    
private:
    UPROPERTY()
    UObject* WorldContext;
    
    UPROPERTY()
    FGameplayTag GameplayTag;
    
public:
    USN2WaitForLocalPlayerGameplayTagCount();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USN2WaitForLocalPlayerGameplayTagCount* WaitForLocalPlayerGameplayTagCount(UObject* WorldContextObject, FGameplayTag NewGameplayTag);
    
protected:
    UFUNCTION()
    void OnLocalPlayerReady();
    
    UFUNCTION()
    void OnAbilitySystemTagCountChanged(FGameplayTag Tag, int32 NewCount);
    
};

