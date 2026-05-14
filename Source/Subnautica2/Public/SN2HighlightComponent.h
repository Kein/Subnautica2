#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractHighlightComponentLink.h"
#include "SN2HighlightComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2HighlightComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FInteractHighlightComponentLink> InteractHighlightComponentLinks;
    
    USN2HighlightComponent(const FObjectInitializer& ObjectInitializer);

};

