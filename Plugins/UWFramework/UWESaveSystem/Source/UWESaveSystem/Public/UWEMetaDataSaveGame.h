#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "UWESaveSlotMetaData.h"
#include "UWEMetaDataSaveGame.generated.h"

UCLASS()
class UWESAVESYSTEM_API UUWEMetaDataSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FUWESaveSlotMetaData MetaData;
    
    UUWEMetaDataSaveGame();

};

