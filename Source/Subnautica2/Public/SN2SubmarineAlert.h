#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "UWEPrimaryDataAssetBase.h"
#include "EAlertSeverity.h"
#include "SN2SubmarineAlert.generated.h"

class UFMODEvent;
class UTexture2D;

UCLASS()
class SUBNAUTICA2_API USN2SubmarineAlert : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag IdentifierTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText AlertName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UFMODEvent* FMODEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Cooldown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool PlayWhenNoPower;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer AlertQueueCategory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAlertSeverity AlertSeverity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer AlertApplicationTags;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* AlertThumbnail;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText AlertMessage;
    
    USN2SubmarineAlert();

    UFUNCTION(BlueprintPure)
    FGameplayTag GetSeverityTag() const;
    
};

