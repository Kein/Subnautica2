#pragma once
#include "CoreMinimal.h"
#include "UWEVideoTourSample.h"
#include "UWEVideoTour.generated.h"

USTRUCT(BlueprintType)
struct FUWEVideoTour {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DurationSecs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> ConsoleCommandsBefore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> ConsoleCommandsAfter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FUWEVideoTourSample> Samples;
    
    UWEAUTOMATIONTESTING_API FUWEVideoTour();
};

