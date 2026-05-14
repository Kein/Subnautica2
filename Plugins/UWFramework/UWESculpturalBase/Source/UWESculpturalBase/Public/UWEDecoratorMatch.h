#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEActorUID.h"
#include "UWERightAngleRotator.h"
#include "UWEDecoratorMatch.generated.h"

class UUWEBaseDecorator;

USTRUCT(BlueprintType)
struct FUWEDecoratorMatch {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    uint32 ID;
    
    UPROPERTY(SaveGame)
    UUWEBaseDecorator* DecoratorData;
    
    UPROPERTY(SaveGame)
    FUWERightAngleRotator MatchRotation;
    
    UPROPERTY(SaveGame)
    FIntVector OriginCell;
    
    UPROPERTY(SaveGame)
    TArray<FIntVector> MatchCells;
    
    UPROPERTY(SaveGame)
    FUWEActorUID ActorID;
    
    UWESCULPTURALBASE_API FUWEDecoratorMatch();
};

