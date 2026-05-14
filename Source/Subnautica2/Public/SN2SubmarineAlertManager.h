#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActiveGameplayEffectHandle.h"
#include "AlertInstHandle.h"
#include "Templates/SubclassOf.h"
#include "SN2SubmarineAlertManager.generated.h"

class USN2SubmarineAlert;
class UUWEGameplayEffect;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2SubmarineAlertManager : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewAlertPlayed, USN2SubmarineAlert*, NewAlert);
    
    UPROPERTY(BlueprintAssignable)
    FOnNewAlertPlayed OnNewAlertPlayed;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float BasePlayOffset;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UUWEGameplayEffect> SystemActiveEffect;
    
    UPROPERTY()
    FActiveGameplayEffectHandle SystemActiveHandle;
    
public:
    USN2SubmarineAlertManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveAlert(UPARAM(Ref) FAlertInstHandle& Handle);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_PlayAlertInternal(USN2SubmarineAlert* NewAlert);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsRedAlert() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintPure)
    static bool IsAlertHandleValid(FAlertInstHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    FAlertInstHandle AddAlert(USN2SubmarineAlert* Alert, bool IgnorePreexistingCooldown);
    
};

