#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Engine/HitResult.h"
#include "InteractionInfo.h"
#include "Interactable.generated.h"

class AActor;
class AController;
class APawn;
class UPrimitiveComponent;

UINTERFACE(Blueprintable)
class UWEINTERFACES_API UInteractable : public UInterface {
    GENERATED_BODY()
};

class UWEINTERFACES_API IInteractable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInteractDisabled(AActor* HoverActor, AActor* ForActor, float Distance, UPrimitiveComponent* HoverComponent, FHitResult HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InteractServer(AController* Controller, APawn* Pawn, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float InteractionDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InteractEndServer(AController* Controller, APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InteractEndClient(AController* Controller, APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InteractEnd(AController* Controller, APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InteractClient(AController* Controller, APawn* Pawn, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Interact(AController* Controller, APawn* Pawn, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FInteractionInfo GetInteractionInfo(AActor* HoverActor, AActor* ForActor, UPrimitiveComponent* HoverComponent, FHitResult HitResult);
    
};

