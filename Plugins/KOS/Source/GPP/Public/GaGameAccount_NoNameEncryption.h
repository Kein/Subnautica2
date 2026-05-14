#pragma once
#include "CoreMinimal.h"
#include "GaGameAccount_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGaGameAccount_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Guid;
    
    UPROPERTY(EditAnywhere)
    FString ProviderID;
    
    UPROPERTY(EditAnywhere)
    FString PlatformId;
    
    UPROPERTY(EditAnywhere)
    FString AuthProvider;
    
    UPROPERTY(EditAnywhere)
    FString AuthProviderID;
    
    UPROPERTY(EditAnywhere)
    int64 CreatedAt;
    
    UPROPERTY(EditAnywhere)
    int64 UpdatedAt;
    
    FGaGameAccount_NoNameEncryption();
};

