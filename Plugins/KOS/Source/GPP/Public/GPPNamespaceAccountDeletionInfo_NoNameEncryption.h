#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GPPNamespaceAccountDeletionInfo_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPNamespaceAccountDeletionInfo_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Namespace;
    
    UPROPERTY()
    bool Enabled;
    
    UPROPERTY()
    int32 GracePeriodInMins;
    
    UPROPERTY()
    FDateTime CreatedAt;
    
    UPROPERTY()
    FDateTime UpdatedAt;
    
    UPROPERTY()
    FString ModifiedBy;
    
    UPROPERTY()
    int32 Revision;
    
    FGPPNamespaceAccountDeletionInfo_NoNameEncryption();
};

