#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UWEAISpawnedActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWEAISpawnedActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ScaleDeviationPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 GroupMinSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 GroupMaxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftClassPtr<AActor>> GroupTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Proportion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IgnoreCollisionBetweenMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceDisableLODs;
    
private:
    UPROPERTY(Transient)
    TSubclassOf<AActor> ActorClassPtr;
    
public:
    UWEAISPAWNER_API FUWEAISpawnedActor();
};

