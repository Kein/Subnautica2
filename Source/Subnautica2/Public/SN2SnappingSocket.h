#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SN2SnappingSocket.generated.h"

USTRUCT(BlueprintType)
struct FSN2SnappingSocket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString SocketTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool UseSocketRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FTransform Offset;
    
    SUBNAUTICA2_API FSN2SnappingSocket();
};

