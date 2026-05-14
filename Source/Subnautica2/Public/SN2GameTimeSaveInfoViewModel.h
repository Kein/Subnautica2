#pragma once
#include "CoreMinimal.h"
#include "UWESaveGameCustomInfoBaseViewModel.h"
#include "SN2GameTimeSaveInfoViewModel.generated.h"

UCLASS()
class SUBNAUTICA2_API USN2GameTimeSaveInfoViewModel : public UUWESaveGameCustomInfoBaseViewModel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    double ElapsedPlayTime;
    
public:
    USN2GameTimeSaveInfoViewModel();

};

