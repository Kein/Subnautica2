#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWECraftingSettings.h"
#include "UWEGameConfigSettings.h"
#include "UWEGameConfigComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEGAMECONFIGURATION_API UUWEGameConfigComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSettingsChanged, const FUWEGameConfigSettings&, ChangedSettings);
    
    UPROPERTY(BlueprintAssignable)
    FOnSettingsChanged OnSettingsChanged;
    
protected:
    UPROPERTY(ReplicatedUsing=OnRep_GameSettings)
    FUWEGameConfigSettings GameSettings;
    
public:
    UUWEGameConfigComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OverrideGameSettings(const FUWEGameConfigSettings& InGameSettings);
    
    UFUNCTION(BlueprintCallable)
    void OverrideCraftingSettings(const FUWECraftingSettings& InCraftingSettings);
    
private:
    UFUNCTION()
    void OnRep_GameSettings();
    
public:
    UFUNCTION(BlueprintPure)
    FUWEGameConfigSettings GetGameSettings() const;
    
};

