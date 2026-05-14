#pragma once
#include "CoreMinimal.h"
#include "UWEActorDataAsset.h"
#include "UWEInteractionDataAsset.generated.h"

UCLASS(EditInlineNew)
class UWEINTERACT_API UUWEInteractionDataAsset : public UUWEActorDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InteractionRadius;
    
    UUWEInteractionDataAsset();

};

