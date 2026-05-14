#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWESaveGameCustomInfoBase.generated.h"

UCLASS(Abstract, BlueprintType)
class UWESAVESYSTEM_API UUWESaveGameCustomInfoBase : public UObject {
    GENERATED_BODY()
public:
    UUWESaveGameCustomInfoBase();

    UFUNCTION(BlueprintPure)
    FName K2_GetLookupId() const;
    
};

