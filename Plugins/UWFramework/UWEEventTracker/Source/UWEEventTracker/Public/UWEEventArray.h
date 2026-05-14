#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "UWEEventEntry.h"
#include "UWEEventArray.generated.h"

class UUWEEventTrackerComponent;

USTRUCT(BlueprintType)
struct FUWEEventArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UUWEEventTrackerComponent* Owner;
    
    UPROPERTY(SaveGame)
    TArray<FUWEEventEntry> Entries;
    
    UWEEVENTTRACKER_API FUWEEventArray();
};

