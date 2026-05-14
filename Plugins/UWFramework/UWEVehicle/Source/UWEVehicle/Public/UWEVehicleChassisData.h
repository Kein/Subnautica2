#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEActorDataAsset.h"
#include "EUWEVehicleMovementType.h"
#include "UWEVehicleChassisData.generated.h"

class AActor;
class UGameplayAbility;
class UGameplayEffect;
class UInputMappingContext;
class UUWEVehicleChassisData;

UCLASS(EditInlineNew)
class UWEVEHICLE_API UUWEVehicleChassisData : public UUWEActorDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag ChassisTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAdjustCapsuleSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CapsuleRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseSoftCollision;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UInputMappingContext* InputMappingContext;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EUWEVehicleMovementType MovementType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxSwimAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxWalkAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BankingModifier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AngularAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AngularDrag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SwimmingFriction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RollCorrectionRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StrafeSpeedModifier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDisableAttachHandles;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSoftClassPtr<UGameplayEffect>> GrantedEffects;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSoftClassPtr<UGameplayAbility>> GrantedAbilities;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag AttachBeginCue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag AttachCompleteCue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag DetachCue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag EngineCue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag LightCue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag ActiveCue;
    
    UUWEVehicleChassisData();

    UFUNCTION(BlueprintPure)
    static UUWEVehicleChassisData* GetVehicleChassisDataForActor(const AActor* Actor);
    
};

