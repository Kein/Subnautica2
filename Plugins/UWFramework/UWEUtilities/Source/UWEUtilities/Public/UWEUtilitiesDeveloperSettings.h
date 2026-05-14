#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UWEUtilitiesDeveloperSettings.generated.h"

UCLASS(Config=EditorPerProjectUserSettings)
class UWEUTILITIES_API UUWEUtilitiesDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> FeatureFlags;
    
    UUWEUtilitiesDeveloperSettings();

};

