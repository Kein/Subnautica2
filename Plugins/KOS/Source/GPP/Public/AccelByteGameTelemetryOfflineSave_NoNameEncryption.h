#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "AccelByteModelsGameTelemetrySaveSlot_NoNameEncryption.h"
#include "AccelByteGameTelemetryOfflineSave_NoNameEncryption.generated.h"

class UAccelByteGameTelemetrySaveData_NoNameEncryption;

UCLASS()
class GPP_API UAccelByteGameTelemetryOfflineSave_NoNameEncryption : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    int32 IncrementId;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FAccelByteModelsGameTelemetrySaveSlot_NoNameEncryption> Slots;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UAccelByteGameTelemetrySaveData_NoNameEncryption* LastSlot;
    
public:
    UAccelByteGameTelemetryOfflineSave_NoNameEncryption();

};

