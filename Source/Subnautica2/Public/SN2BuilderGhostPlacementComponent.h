#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SN2BuilderGhostPlacementComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2BuilderGhostPlacementComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    int32 UserRotation;
    
public:
    UPROPERTY(Transient)
    bool SnapToAlignWithBase;
    
    UPROPERTY(Transient)
    bool AllowUserRotation;
    
    UPROPERTY(Transient)
    bool UsingBaseAsReference;
    
    UPROPERTY(Transient)
    float ReferenceYaw;
    
    USN2BuilderGhostPlacementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool RemoveActorToIgnore(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void AddUserRotation(int32 Degrees);
    
    UFUNCTION(BlueprintCallable)
    void AddActorToIgnore(AActor* Actor);
    
};

