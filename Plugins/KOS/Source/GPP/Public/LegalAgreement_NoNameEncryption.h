#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AccelByteModelsPolicyVersionWithLocalizedVersionObject_NoNameEncryption.h"
#include "EPushNotificationIntegrationType_NoNameEncryption.h"
#include "LegalAgreement_NoNameEncryption.generated.h"

USTRUCT(BlueprintType)
struct GPP_API FLegalAgreement_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDateTime CreatedAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDateTime UpdatedAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ReadableId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PolicyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PolicyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Namespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString CountryCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString CountryGroupCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> BaseUrls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShouldNotifyOnUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAccelByteModelsPolicyVersionWithLocalizedVersionObject_NoNameEncryption> PolicyVersions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsMandatory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsAccepted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDefaultOpted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDefaultSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPushNotificationIntegrationType_NoNameEncryption PushNotificationIntegration;
    
    FLegalAgreement_NoNameEncryption();
};

