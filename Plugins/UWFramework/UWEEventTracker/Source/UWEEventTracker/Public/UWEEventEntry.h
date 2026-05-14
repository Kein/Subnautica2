#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "UWEEventKey.h"
#include "UWEEventEntry.generated.h"

USTRUCT()
struct FUWEEventEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FUWEEventKey Key;
    
    UPROPERTY(SaveGame)
    int32 Value;
    
    UWEEVENTTRACKER_API FUWEEventEntry();
};

