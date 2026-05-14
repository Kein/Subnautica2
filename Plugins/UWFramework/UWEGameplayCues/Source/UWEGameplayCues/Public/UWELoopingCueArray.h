#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "UWEReplicatedCueData.h"
#include "UWELoopingCueArray.generated.h"

class UUWELoopingCuesComponent;

USTRUCT(BlueprintType)
struct FUWELoopingCueArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FUWEReplicatedCueData> Items;
    
private:
    UPROPERTY(Instanced, NotReplicated)
    UUWELoopingCuesComponent* Owner;
    
    UPROPERTY(NotReplicated)
    TArray<FUWEReplicatedCueData> OldItems;
    
public:
    UWEGAMEPLAYCUES_API FUWELoopingCueArray();
};

