#pragma once
#include "CoreMinimal.h"
#include "EOpenRangeOption_NoNameEncryption.h"
#include "UserPlayInfoPrivacy_NoNameEncryption.generated.h"

USTRUCT()
struct FUserPlayInfoPrivacy_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    EOpenRangeOption_NoNameEncryption Option;
    
    GPP_API FUserPlayInfoPrivacy_NoNameEncryption();
};

