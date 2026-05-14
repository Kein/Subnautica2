#pragma once
#include "CoreMinimal.h"
#include "UWEStimulusComponent.h"
#include "UWEStimulusSensorComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESTIMULUS_API UUWEStimulusSensorComponent : public UUWEStimulusComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StimulusSupported;
    
    UUWEStimulusSensorComponent(const FObjectInitializer& ObjectInitializer);

};

