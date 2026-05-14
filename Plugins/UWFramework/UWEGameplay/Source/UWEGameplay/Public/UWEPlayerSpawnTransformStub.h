#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWEPlayerSaveDataStub.h"
#include "UWEPlayerSpawnTransformStub.generated.h"

UCLASS()
class UUWEPlayerSpawnTransformStub : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FUWEPlayerSaveDataStub SaveData;
    
    UUWEPlayerSpawnTransformStub();

};

