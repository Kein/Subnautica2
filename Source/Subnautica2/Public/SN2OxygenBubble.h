#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "SN2OxygenBubbleData.h"
#include "SN2OxygenBubble.generated.h"

class ASN2PlayerCharacter;
class UGameplayEffect;
class UPrimitiveComponent;
class USphereComponent;
class UStaticMeshComponent;

UCLASS()
class SUBNAUTICA2_API ASN2OxygenBubble : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USphereComponent* SphereComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UGameplayEffect> ApplyGameplayEffect;
    
    UPROPERTY(ReplicatedUsing=OnRep_BubbleData)
    FSN2OxygenBubbleData BubbleData;
    
    UPROPERTY(ReplicatedUsing=OnRep_Popped)
    bool bPopped;
    
public:
    ASN2OxygenBubble(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Pop(const ASN2PlayerCharacter* Player);
    
private:
    UFUNCTION()
    void OnRep_Popped();
    
    UFUNCTION()
    void OnRep_BubbleData();
    
    UFUNCTION()
    void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnPopped(const ASN2PlayerCharacter* Player);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnBeginAscend();
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginAscend(float DelaySeconds);
    
};

