#pragma once
#include "CoreMinimal.h"
#include "GaProfile_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGaProfile_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Guid;
    
    UPROPERTY(EditAnywhere)
    FString ProviderID;
    
    UPROPERTY(EditAnywhere)
    FString DisplayName;
    
    UPROPERTY(EditAnywhere)
    FString CountryId;
    
    UPROPERTY(EditAnywhere)
    int64 DateOfBirth;
    
    UPROPERTY(EditAnywhere)
    FString Email;
    
    UPROPERTY(EditAnywhere)
    bool EmailOptIn;
    
    UPROPERTY(EditAnywhere)
    bool ToSAccepted;
    
    UPROPERTY(EditAnywhere)
    int64 EmailOptInUpdatedAt;
    
    UPROPERTY(EditAnywhere)
    FString UserName;
    
    UPROPERTY(EditAnywhere)
    int64 CreatedAt;
    
    UPROPERTY(EditAnywhere)
    int64 UpdatedAt;
    
    FGaProfile_NoNameEncryption();
};

