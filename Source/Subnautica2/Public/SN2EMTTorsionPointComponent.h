#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagContainer.h"
#include "EMTTorsionComponentExtraInfo.h"
#include "SN2EMTTorsionPointComponent.generated.h"

class AActor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2EMTTorsionPointComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSN2OnApplyTorsion, float, Torsion, float, DeltaTime);
    
    UPROPERTY(BlueprintAssignable)
    FSN2OnApplyTorsion OnApplyTorsion;
    
    UPROPERTY(EditDefaultsOnly)
    float PointVisualTurnSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText NegativeTorsionStringKey;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText PositiveTorsionStringKey;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_InteractingActor)
    AActor* InteractingActor;
    
private:
    UPROPERTY(EditAnywhere)
    FGameplayTag TorsionedGCLoopTag;
    
    UPROPERTY(Replicated)
    float VisualRotation;
    
public:
    USN2EMTTorsionPointComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    void TryGetExtraInfo(bool& bHasExtraInfo, FEMTTorsionComponentExtraInfo& ExtraInfo) const;
    
    UFUNCTION(BlueprintCallable)
    void SetInteractingActor(AActor* NewActor);
    
private:
    UFUNCTION()
    void OnRep_InteractingActor();
    
    UFUNCTION()
    void NativeTorsionApplied(float Torsion, float DeltaTime);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasInteractingActor() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearInteractingActor();
    
    UFUNCTION(BlueprintCallable)
    void ApplyTorsion(float Multiplier, float DeltaTime);
    
};

