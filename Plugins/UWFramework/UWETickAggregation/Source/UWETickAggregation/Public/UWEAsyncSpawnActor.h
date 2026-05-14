#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "UWEAsyncSpawnActor.generated.h"

class AActor;
class UUWEAsyncSpawnActor;

UCLASS()
class UWETICKAGGREGATION_API UUWEAsyncSpawnActor : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnFinishedDelegate, AActor*, SpawnedActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSpawnFailedDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FSpawnFinishedDelegate OnSpawnFinished;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnFailedDelegate OnSpawnFailed;
    
    UUWEAsyncSpawnActor();

    UFUNCTION(BlueprintCallable)
    static UUWEAsyncSpawnActor* AsyncSpawnActor(AActor* Owner, TSubclassOf<AActor> ActorClass, FTransform Transform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride);
    
};

