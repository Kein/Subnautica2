#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPushNotificationIntegrationType_NoNameEncryption.h"
#include "LegalAgreementSummary_NoNameEncryption.generated.h"

USTRUCT(BlueprintType)
struct GPP_API FLegalAgreementSummary_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PolicyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDateTime PublishedDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AttachmentLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString LocalizedPolicyVersionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PolicyVersionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PolicyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPushNotificationIntegrationType_NoNameEncryption PushNotificationIntegration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsAccepted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsMandatory;
    
    FLegalAgreementSummary_NoNameEncryption();
};

