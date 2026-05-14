#pragma once
#include "CoreMinimal.h"
#include "GPPAchievementICon_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPAchievementICon_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Slug;
    
    UPROPERTY()
    FString URL;
    
    FGPPAchievementICon_NoNameEncryption();
};

