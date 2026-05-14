#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "UWETargetActor.generated.h"

class AActor;
class UObject;

USTRUCT(BlueprintType)
struct FUWETargetActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Distance;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsInteractable;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<UObject> InteractableInterface;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bClientInteraction;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FHitResult HitResult;
    
    UWEABILITYSYSTEM_API FUWETargetActor();
};

