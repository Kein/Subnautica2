#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "Components/SlateWrapperTypes.h"
#include "GameSetting.generated.h"

class UGameSetting;
class UGameSettingRegistry;
class ULocalPlayer;

UCLASS(Abstract, BlueprintType)
class GAMESETTINGS_API UGameSetting : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ULocalPlayer* LocalPlayer;
    
    UPROPERTY(Transient)
    UGameSetting* SettingParent;
    
    UPROPERTY(Transient)
    UGameSettingRegistry* OwningRegistry;
    
public:
    UGameSetting();

    UFUNCTION(BlueprintPure)
    FText GetWarningRichText() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetTags() const;
    
    UFUNCTION(BlueprintPure)
    FText GetDynamicDetails() const;
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetDisplayNameVisibility();
    
    UFUNCTION(BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    FName GetDevName() const;
    
    UFUNCTION(BlueprintPure)
    FText GetDescriptionRichText() const;
    
};

