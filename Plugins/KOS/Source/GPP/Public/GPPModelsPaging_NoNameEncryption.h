#pragma once
#include "CoreMinimal.h"
#include "GPPModelsPaging_NoNameEncryption.generated.h"

USTRUCT(BlueprintType)
struct GPP_API FGPPModelsPaging_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString First;
    
    UPROPERTY(EditAnywhere)
    FString Last;
    
    UPROPERTY(EditAnywhere)
    FString Next;
    
    UPROPERTY(EditAnywhere)
    FString Previous;
    
    FGPPModelsPaging_NoNameEncryption();
};

