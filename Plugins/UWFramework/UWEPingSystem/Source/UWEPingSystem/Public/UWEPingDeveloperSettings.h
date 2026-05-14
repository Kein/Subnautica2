#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "UWEPingDeveloperSettings.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class UWEPINGSYSTEM_API UUWEPingDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TArray<FLinearColor> PingThumbnailColors;
    
    UUWEPingDeveloperSettings();

};

