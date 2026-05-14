#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "UWEBaseGameplayEventData.generated.h"

UCLASS(Abstract, BlueprintType, DefaultToInstanced, EditInlineNew)
class UWEABILITYSYSTEM_API UUWEBaseGameplayEventData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag EventTag;
    
    UUWEBaseGameplayEventData();

};

