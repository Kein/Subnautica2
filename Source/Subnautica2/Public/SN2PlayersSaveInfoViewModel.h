#pragma once
#include "CoreMinimal.h"
#include "UWESaveGameCustomInfoBaseViewModel.h"
#include "SN2PlayerRecord.h"
#include "SN2PlayersSaveInfoViewModel.generated.h"

UCLASS()
class SUBNAUTICA2_API USN2PlayersSaveInfoViewModel : public UUWESaveGameCustomInfoBaseViewModel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<FSN2PlayerRecord> PlayerRecords;
    
public:
    USN2PlayersSaveInfoViewModel();

};

