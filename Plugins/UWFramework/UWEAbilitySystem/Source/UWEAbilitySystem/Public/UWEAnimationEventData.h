#pragma once
#include "CoreMinimal.h"
#include "UWEAnimationEventParams.h"
#include "UWEBaseGameplayEventData.h"
#include "UWEAnimationEventData.generated.h"

UCLASS(EditInlineNew)
class UWEABILITYSYSTEM_API UUWEAnimationEventData : public UUWEBaseGameplayEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEAnimationEventParams AnimationParams;
    
    UUWEAnimationEventData();

};

