#pragma once
#include "CoreMinimal.h"
#include "UWENetworkedAttachmentAnimationSequencerConfig.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct UWEPAWNATTACHMENT_API FUWENetworkedAttachmentAnimationSequencerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<ULevelSequence> Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AttachmentOwnerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AttachmentTag;
    
    FUWENetworkedAttachmentAnimationSequencerConfig();
};

