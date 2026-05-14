#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SN2PlayerRecord.generated.h"

USTRUCT(BlueprintType)
struct SUBNAUTICA2_API FSN2PlayerRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    bool bIsHost;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    int32 PlayerId;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FDateTime LastPlayed;
    
    FSN2PlayerRecord();
};

