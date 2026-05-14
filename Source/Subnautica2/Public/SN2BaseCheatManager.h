#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "SN2BaseCheatManager.generated.h"

UCLASS()
class SUBNAUTICA2_API USN2BaseCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString LastCommand;
    
    USN2BaseCheatManager();

};

