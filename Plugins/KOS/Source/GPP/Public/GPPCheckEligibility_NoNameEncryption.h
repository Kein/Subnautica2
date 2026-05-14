#pragma once
#include "CoreMinimal.h"
#include "GPPCheckEligibility_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPCheckEligibility_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Age_Status;
    
    UPROPERTY()
    FString Country;
    
    UPROPERTY()
    FString Redirect_URI;
    
    UPROPERTY()
    bool Verified;
    
    UPROPERTY()
    FString WS_URI;
    
    UPROPERTY()
    FString Device_Code;
    
    FGPPCheckEligibility_NoNameEncryption();
};

