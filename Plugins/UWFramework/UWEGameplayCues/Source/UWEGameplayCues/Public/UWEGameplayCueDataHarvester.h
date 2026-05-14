#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GCHarvesterLogEntry.h"
#include "UWEGameplayCueDataHarvester.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEGAMEPLAYCUES_API UUWEGameplayCueDataHarvester : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FGCHarvesterLogEntry FocusedEntry;
    
public:
    UUWEGameplayCueDataHarvester(const FObjectInitializer& ObjectInitializer);

};

