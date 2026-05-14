#pragma once
#include "CoreMinimal.h"
#include "UWEPerfTestConfig.h"
#include "UWEVideoToursTest.generated.h"

USTRUCT(BlueprintType)
struct FUWEVideoToursTest : public FUWEPerfTestConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> VideoTourFilenames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShuffle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSaveResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUploadResults;
    
    UWEAUTOMATIONTESTING_API FUWEVideoToursTest();
};

