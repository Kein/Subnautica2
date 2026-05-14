#pragma once
#include "CoreMinimal.h"
#include "TagsPromotion.generated.h"

USTRUCT(BlueprintType)
struct FTagsPromotion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bPromoteBuildConfiguration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bPromoteTargetType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bPromoteEngineMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bPromoteIsGame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bPromoteIsStandalone;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bPromoteIsUnattended;
    
    SENTRY_API FTagsPromotion();
};

