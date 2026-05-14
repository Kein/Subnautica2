#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "UWECharacterTrackerSettings.generated.h"

UCLASS(BlueprintType, Config=Game)
class UWECHARACTERTRACKER_API UUWECharacterTrackerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath CharacterTrackerMaterialParameterCollection;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FName LocalPlayerParamName;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FName ProximityParamName;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    int32 NumProximityParams;
    
    UUWECharacterTrackerSettings();

};

