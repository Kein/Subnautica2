#pragma once
#include "CoreMinimal.h"
#include "UWEBaseAttributeSet.h"
#include "UWEGameplayAttributeData.h"
#include "UWEMovementAttributeSet.generated.h"

UCLASS(BlueprintType)
class UWEABILITYSYSTEM_API UUWEMovementAttributeSet : public UUWEBaseAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_MaxWalkSpeed)
    FUWEGameplayAttributeData MaxWalkSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_MaxSwimSpeed)
    FUWEGameplayAttributeData MaxSwimSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_RotationSpeedMultiplier)
    FUWEGameplayAttributeData RotationSpeedMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_WaterCurrentSpeedMultiplier)
    FUWEGameplayAttributeData WaterCurrentSpeedMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_WaterCurrentCentricAngleMultiplier)
    FUWEGameplayAttributeData WaterCurrentCentricAngleMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_WaterCurrentTwistAngleMultiplier)
    FUWEGameplayAttributeData WaterCurrentTwistAngleMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_DashDurationMultiplier)
    FUWEGameplayAttributeData DashDurationMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_DashOxygenCost)
    FUWEGameplayAttributeData DashOxygenCost;
    
    UUWEMovementAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_WaterCurrentTwistAngleMultiplier(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_WaterCurrentSpeedMultiplier(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_WaterCurrentCentricAngleMultiplier(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_RotationSpeedMultiplier(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_MaxWalkSpeed(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_MaxSwimSpeed(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_DashOxygenCost(const FUWEGameplayAttributeData& OldValue);
    
    UFUNCTION()
    void OnRep_DashDurationMultiplier(const FUWEGameplayAttributeData& OldValue);
    
};

