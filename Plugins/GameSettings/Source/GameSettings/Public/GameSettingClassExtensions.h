#pragma once
#include "CoreMinimal.h"
#include "GameSettingClassExtensions.generated.h"

class UGameSettingDetailExtension;

USTRUCT(BlueprintType)
struct FGameSettingClassExtensions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UGameSettingDetailExtension>> Extensions;
    
    GAMESETTINGS_API FGameSettingClassExtensions();
};

