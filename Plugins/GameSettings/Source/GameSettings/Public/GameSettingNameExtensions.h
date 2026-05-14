#pragma once
#include "CoreMinimal.h"
#include "GameSettingNameExtensions.generated.h"

class UGameSettingDetailExtension;

USTRUCT(BlueprintType)
struct FGameSettingNameExtensions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bIncludeClassDefaultExtensions;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UGameSettingDetailExtension>> Extensions;
    
    GAMESETTINGS_API FGameSettingNameExtensions();
};

