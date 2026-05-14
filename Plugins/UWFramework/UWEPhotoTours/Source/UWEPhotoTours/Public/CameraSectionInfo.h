#pragma once
#include "CoreMinimal.h"
#include "CameraSectionInfo.generated.h"

USTRUCT(BlueprintType)
struct FCameraSectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SectionData;
    
    UWEPHOTOTOURS_API FCameraSectionInfo();
};

