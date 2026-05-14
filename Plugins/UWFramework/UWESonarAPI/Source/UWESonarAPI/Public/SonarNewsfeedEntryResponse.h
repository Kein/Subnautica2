#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SonarNewsfeedContent.h"
#include "SonarNewsfeedEntryResponse.generated.h"

USTRUCT(BlueprintType)
struct FSonarNewsfeedEntryResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString DocumentId;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime Date;
    
    UPROPERTY(BlueprintReadOnly)
    FString Title;
    
    UPROPERTY(BlueprintReadOnly)
    FString ImageUrl;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<uint8> ImageThumbnailData;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FSonarNewsfeedContent> Content;
    
    UWESONARAPI_API FSonarNewsfeedEntryResponse();
};

