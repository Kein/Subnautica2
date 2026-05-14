#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGameTelemetrySaveSlot_NoNameEncryption.generated.h"

USTRUCT(BlueprintType)
struct GPP_API FAccelByteModelsGameTelemetrySaveSlot_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Name;
    
    FAccelByteModelsGameTelemetrySaveSlot_NoNameEncryption();
};

