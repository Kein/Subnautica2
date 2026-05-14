#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWEGameTimeCustomSaveInfoStub.generated.h"

UCLASS()
class UUWEGameTimeCustomSaveInfoStub : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    double ElapsedGameplayTime;
    
    UPROPERTY(SaveGame)
    int32 GameDays;
    
    UUWEGameTimeCustomSaveInfoStub();

};

