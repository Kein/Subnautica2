#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "SN2InfectedSkeletalMeshComponent.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2InfectedSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName InfectionSlotName;
    
    USN2InfectedSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInfect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisinfect();
    
    UFUNCTION()
    void HandleAttachStarted(AActor* Actor, const FName& SlotName);
    
    UFUNCTION()
    void HandleAttachFinished(AActor* Actor, const FName& SlotName);
    
};

