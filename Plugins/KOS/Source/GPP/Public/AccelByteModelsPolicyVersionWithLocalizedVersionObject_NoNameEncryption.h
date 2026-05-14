#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AccelByteModelsLocalizedPolicyVersionObject_NoNameEncryption.h"
#include "AccelByteModelsPolicyVersionWithLocalizedVersionObject_NoNameEncryption.generated.h"

USTRUCT(BlueprintType)
struct GPP_API FAccelByteModelsPolicyVersionWithLocalizedVersionObject_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDateTime CreatedAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDateTime UpdatedAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DisplayVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDateTime PublishedDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAccelByteModelsLocalizedPolicyVersionObject_NoNameEncryption> LocalizedPolicyVersions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsCommitted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsCrucial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsInEffect;
    
    FAccelByteModelsPolicyVersionWithLocalizedVersionObject_NoNameEncryption();
};

