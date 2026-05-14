#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Oauth2GameUserInfo_NoNameEncryption.generated.h"

USTRUCT(BlueprintType)
struct GPP_API FOauth2GameUserInfo_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Deletion_status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDateTime Linked_at;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Namespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString User_Id;
    
    FOauth2GameUserInfo_NoNameEncryption();
};

