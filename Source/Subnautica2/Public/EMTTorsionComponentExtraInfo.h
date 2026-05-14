#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMTTorsionComponentExtraInfo.generated.h"

USTRUCT(BlueprintType)
struct FEMTTorsionComponentExtraInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool bLocalized;
    
    UPROPERTY(BlueprintReadWrite)
    FColor TintColor;
    
    UPROPERTY(BlueprintReadWrite)
    FString ExtraInfo;
    
    UPROPERTY(BlueprintReadWrite)
    FText ExtraInfoFormatData;
    
    SUBNAUTICA2_API FEMTTorsionComponentExtraInfo();
};

