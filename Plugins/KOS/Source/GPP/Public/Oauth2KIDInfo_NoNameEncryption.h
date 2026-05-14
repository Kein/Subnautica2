#pragma once
#include "CoreMinimal.h"
#include "Oauth2KIDInfo_NoNameEncryption.generated.h"

USTRUCT(BlueprintType)
struct GPP_API FOauth2KIDInfo_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Able_to_link;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Email;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Is_full_kid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Krafton_ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Krafton_tag;
    
    FOauth2KIDInfo_NoNameEncryption();
};

