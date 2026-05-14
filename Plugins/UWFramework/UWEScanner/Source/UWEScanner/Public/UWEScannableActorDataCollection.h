#pragma once
#include "CoreMinimal.h"
#include "UWEScannableActorData.h"
#include "UWEScannableActorDataCollection.generated.h"

USTRUCT(BlueprintType)
struct FUWEScannableActorDataCollection {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TArray<FUWEScannableActorData> Items;
    
private:
    UPROPERTY(SaveGame)
    int32 PlayerId;
    
public:
    UWESCANNER_API FUWEScannableActorDataCollection();
};

