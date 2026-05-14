#pragma once
#include "CoreMinimal.h"
#include "EUWEPCGActorFilter.generated.h"

UENUM(BlueprintType)
enum EUWEPCGActorFilter {
    Self,
    Parent,
    Root,
    AllWorldActors,
    Original,
    FromInput,
};

