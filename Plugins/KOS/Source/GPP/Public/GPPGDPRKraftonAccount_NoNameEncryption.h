#pragma once
#include "CoreMinimal.h"
#include "GPPGDPRKraftonAccount_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPGDPRKraftonAccount_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Namespace;
    
    UPROPERTY(EditAnywhere)
    FString User_Id;
    
    FGPPGDPRKraftonAccount_NoNameEncryption();
};

