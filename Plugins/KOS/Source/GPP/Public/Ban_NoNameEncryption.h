#pragma once
#include "CoreMinimal.h"
#include "Ban_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FBan_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Ban;
    
    UPROPERTY(EditAnywhere)
    FString BanId;
    
    UPROPERTY(EditAnywhere)
    FString EndDate;
    
    FBan_NoNameEncryption();
};

