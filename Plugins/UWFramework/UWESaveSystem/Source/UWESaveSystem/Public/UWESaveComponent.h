#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EUWESaveComponentIsOnPlayer.h"
#include "UWESaveComponent.generated.h"

class UUWESaveHandle;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESAVESYSTEM_API UUWESaveComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCollectDataOnSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWESaveComponentIsOnPlayer ComponentIsOnPlayer;
    
private:
    UPROPERTY(Transient)
    UUWESaveHandle* SaveHandleForOwningActor;
    
public:
    UUWESaveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Store();
    
};

