#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UWEWorldMarkupLocalSettings.generated.h"

UCLASS(Config=UWEWorldMarkupLocal)
class UWEWORLDPOPULATION2_API UUWEWorldMarkupLocalSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool DrawDebug;
    
    UPROPERTY(Config, EditAnywhere)
    bool DetectLeaks;
    
    UPROPERTY(Config, EditAnywhere)
    bool ShowModalPopupOnLeak;
    
    UPROPERTY(Config, EditAnywhere)
    int32 NumCellsBetweenLeakCheck;
    
    UPROPERTY(Config, EditAnywhere)
    int32 NumCellsToShowAfterLeak;
    
    UPROPERTY(Config, EditAnywhere)
    double LeakDetectionDistance;
    
    UUWEWorldMarkupLocalSettings();

};

