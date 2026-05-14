#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnAttachedDelegate.h"
#include "UWEAttachableComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEUTILITIES_API UUWEAttachableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnAttached OnAttached;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    AActor* AttachedTo;
    
public:
    UUWEAttachableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAttachedTo(AActor* NewAttachedTo, bool ForceBroadcast);
    
};

