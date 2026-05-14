#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "UWEGameInstance.generated.h"

UCLASS(NonTransient)
class UWEGAMEPLAY_API UUWEGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 NumInitialPrecacheRequests;
    
    UPROPERTY()
    int32 NumInitialPrecompiles;
    
    UPROPERTY()
    bool bHasPrecachedInitialLevel;
    
    UUWEGameInstance();

};

