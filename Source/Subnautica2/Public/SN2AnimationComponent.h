#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayEffectTypes.h"
#include "SN2AnimationComponent.generated.h"

class UAnimInstance;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2AnimationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* AnimSyncSkeletalMeshDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAnimSyncEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnimSyncDrivenBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnimSyncDrivenBlendOutTime;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagBlueprintPropertyMap GameplayTagPropertyMap;
    
public:
    USN2AnimationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateComponent(float DeltaTime);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    USkeletalMeshComponent* GetTargetSKMComponent() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UAnimInstance* GetAnimInstance() const;
    
};

