#pragma once
#include "CoreMinimal.h"
#include "ListBulkUserInfoRequest_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FListBulkUserInfoRequest_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> UserIds;
    
    FListBulkUserInfoRequest_NoNameEncryption();
};

