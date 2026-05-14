#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AccelByteModelsLocalizedPolicyVersionObject_NoNameEncryption.generated.h"

USTRUCT(BlueprintType)
struct GPP_API FAccelByteModelsLocalizedPolicyVersionObject_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDateTime CreatedAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDateTime UpdatedAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString LocaleCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ContentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AttachmentLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AttachmentVersionIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AttachmentChecksum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDateTime PublishedDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDefaultSelection;
    
    FAccelByteModelsLocalizedPolicyVersionObject_NoNameEncryption();
};

