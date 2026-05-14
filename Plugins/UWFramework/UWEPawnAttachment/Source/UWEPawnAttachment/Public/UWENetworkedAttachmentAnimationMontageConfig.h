#pragma once
#include "CoreMinimal.h"
#include "UWENetworkedAttachmentAnimationMontageConfig.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct UWEPAWNATTACHMENT_API FUWENetworkedAttachmentAnimationMontageConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* AnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DetachByAnimMontageNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName DetachNotifyName;
    
    FUWENetworkedAttachmentAnimationMontageConfig();
};

