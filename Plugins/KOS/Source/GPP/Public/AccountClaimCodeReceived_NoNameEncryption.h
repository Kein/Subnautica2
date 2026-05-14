#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AccountClaimEventBase_NoNameEncryption.h"
#include "AccountClaimCodeReceived_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FAccountClaimCodeReceived_NoNameEncryption : public FAccountClaimEventBase_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString LinkCode;
    
    UPROPERTY(EditAnywhere)
    FDateTime ExpiresAt;
    
    UPROPERTY(EditAnywhere)
    FString LinkURL;
    
    FAccountClaimCodeReceived_NoNameEncryption();
};

