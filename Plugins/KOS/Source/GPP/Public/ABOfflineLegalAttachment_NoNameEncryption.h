#pragma once
#include "CoreMinimal.h"
#include "ABOfflineLegalAttachment_NoNameEncryption.generated.h"

USTRUCT(BlueprintType)
struct FABOfflineLegalAttachment_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Checksum;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Content;
    
    GPP_API FABOfflineLegalAttachment_NoNameEncryption();
};

