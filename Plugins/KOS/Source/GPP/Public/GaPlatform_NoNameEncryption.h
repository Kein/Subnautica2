#pragma once
#include "CoreMinimal.h"
#include "GaPlatform_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGaPlatform_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Guid;
    
    UPROPERTY(EditAnywhere)
    FString DisplayName;
    
    UPROPERTY(EditAnywhere)
    FString PlatformId;
    
    UPROPERTY(EditAnywhere)
    FString AuthProvider;
    
    FGaPlatform_NoNameEncryption();
};

