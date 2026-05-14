#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWESaveGameCustomInfoProperty.h"
#include "UWESaveGameAnalyticsEventInfo.generated.h"

USTRUCT()
struct FUWESaveGameAnalyticsEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid SaveId;
    
    UPROPERTY()
    FDateTime CreatedAt;
    
    UPROPERTY()
    bool IsMultiplayerSave;
    
    UPROPERTY()
    FString DisplayName;
    
    UPROPERTY()
    float SaveGameSizeInKb;
    
    UPROPERTY()
    int32 NumManualSaves;
    
    UPROPERTY()
    TArray<FUWESaveGameCustomInfoProperty> CustomInfo;
    
    UWESAVESYSTEM_API FUWESaveGameAnalyticsEventInfo();
};

