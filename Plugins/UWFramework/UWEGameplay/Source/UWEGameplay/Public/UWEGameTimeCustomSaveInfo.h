#pragma once
#include "CoreMinimal.h"
#include "UWESaveGameCustomInfoBase.h"
#include "UWESaveGameEventInfo.h"
#include "UWEGameTimeCustomSaveInfo.generated.h"

UCLASS()
class UWEGAMEPLAY_API UUWEGameTimeCustomSaveInfo : public UUWESaveGameCustomInfoBase, public IUWESaveGameEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    double ElapsedGameplayTime;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    int32 GameDays;
    
    UUWEGameTimeCustomSaveInfo();


    // Fix for true pure virtual functions not being implemented
};

