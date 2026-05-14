#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWESaveHandleUpgrader.generated.h"

UCLASS(Abstract)
class UWESAVESYSTEM_API UUWESaveHandleUpgrader : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    int32 LatestVersion;
    
    UPROPERTY(SaveGame)
    int32 MinimumSupportedVersion;
    
    UUWESaveHandleUpgrader();

};

