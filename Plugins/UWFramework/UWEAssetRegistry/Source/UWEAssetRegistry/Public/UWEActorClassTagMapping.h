#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "UWEActorClassTagMapping.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWEActorClassTagMapping : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag IdentifierTag;
    
    UWEASSETREGISTRY_API FUWEActorClassTagMapping();
};

