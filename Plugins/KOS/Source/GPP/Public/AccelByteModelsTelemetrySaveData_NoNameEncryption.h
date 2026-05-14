#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AccelByteModelsTelemetrySaveData_NoNameEncryption.generated.h"

USTRUCT(BlueprintType)
struct GPP_API FAccelByteModelsTelemetrySaveData_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString EventType;
    
    UPROPERTY(VisibleAnywhere)
    FString Payload;
    
    UPROPERTY(VisibleAnywhere)
    FString KraftonID;
    
    UPROPERTY(VisibleAnywhere)
    FDateTime EventTimestamp;
    
    FAccelByteModelsTelemetrySaveData_NoNameEncryption();
};

