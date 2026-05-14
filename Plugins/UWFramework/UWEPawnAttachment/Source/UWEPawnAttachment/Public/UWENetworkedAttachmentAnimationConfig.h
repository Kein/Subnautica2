#pragma once
#include "CoreMinimal.h"
#include "EUWENetworkedAttachmentAnimationMode.h"
#include "UWENetworkedAttachmentAnimationMontageConfig.h"
#include "UWENetworkedAttachmentAnimationSequencerConfig.h"
#include "UWENetworkedAttachmentAnimationConfig.generated.h"

USTRUCT(BlueprintType)
struct UWEPAWNATTACHMENT_API FUWENetworkedAttachmentAnimationConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWENetworkedAttachmentAnimationMode AnimationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWENetworkedAttachmentAnimationMontageConfig AttachmentOwnerAnimationMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWENetworkedAttachmentAnimationMontageConfig AttachmentAnimationMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWENetworkedAttachmentAnimationSequencerConfig AnimationSequencerConfig;
    
    FUWENetworkedAttachmentAnimationConfig();
};

