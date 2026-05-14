#pragma once
#include "CoreMinimal.h"
#include "EUWENetworkedAttachmentSocketInterpolationType.h"
#include "UWENetworkedAttachmentSocketInterpolationConfig.generated.h"

USTRUCT(BlueprintType)
struct UWEPAWNATTACHMENT_API FUWENetworkedAttachmentSocketInterpolationConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWENetworkedAttachmentSocketInterpolationType InterpolationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExponentialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TakeLinearSpeedFromActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LinearSpeed;
    
    FUWENetworkedAttachmentSocketInterpolationConfig();
};

