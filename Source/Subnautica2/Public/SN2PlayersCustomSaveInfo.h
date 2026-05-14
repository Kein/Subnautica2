#pragma once
#include "CoreMinimal.h"
#include "UWESaveGameCustomInfoBase.h"
#include "SN2PlayerRecord.h"
#include "SN2PlayersCustomSaveInfo.generated.h"

UCLASS()
class SUBNAUTICA2_API USN2PlayersCustomSaveInfo : public UUWESaveGameCustomInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TMap<int32, FSN2PlayerRecord> PlayerRecords;
    
    USN2PlayersCustomSaveInfo();

};

