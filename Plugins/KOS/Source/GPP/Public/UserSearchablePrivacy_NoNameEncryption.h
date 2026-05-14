#pragma once
#include "CoreMinimal.h"
#include "UserSearchablePrivacy_NoNameEncryption.generated.h"

USTRUCT()
struct FUserSearchablePrivacy_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool Allow;
    
    GPP_API FUserSearchablePrivacy_NoNameEncryption();
};

