#pragma once
#include "CoreMinimal.h"
#include "SonarTwitchLinkResponse.generated.h"

USTRUCT(BlueprintType)
struct FSonarTwitchLinkResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString URL;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<uint8> QRCodeData;
    
    UWESONARAPI_API FSonarTwitchLinkResponse();
};

