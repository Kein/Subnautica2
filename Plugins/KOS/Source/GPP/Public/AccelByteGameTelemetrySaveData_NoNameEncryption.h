#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "AccelByteModelsTelemetrySaveData_NoNameEncryption.h"
#include "AccelByteGameTelemetrySaveData_NoNameEncryption.generated.h"

UCLASS()
class GPP_API UAccelByteGameTelemetrySaveData_NoNameEncryption : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FAccelByteModelsTelemetrySaveData_NoNameEncryption> OfflineData;
    
    UPROPERTY(VisibleAnywhere)
    FString SlotName;
    
    UAccelByteGameTelemetrySaveData_NoNameEncryption();

};

