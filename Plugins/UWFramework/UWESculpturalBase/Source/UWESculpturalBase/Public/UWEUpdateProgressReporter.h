#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWEUpdateProgressReporter.generated.h"

UCLASS(BlueprintType)
class UUWEUpdateProgressReporter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool IsUpdating;
    
    UPROPERTY(BlueprintReadOnly)
    float Progress;
    
    UPROPERTY(BlueprintReadOnly)
    FText ProgressText;
    
    UUWEUpdateProgressReporter();

};

