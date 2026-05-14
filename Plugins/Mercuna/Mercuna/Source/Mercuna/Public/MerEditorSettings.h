#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MerGridEditorSettings.h"
#include "MerOctreeEditorSettings.h"
#include "MerEditorSettings.generated.h"

UCLASS(Config=EditorPerProjectUserSettings)
class MERCUNA_API UMerEditorSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bEnableExtraLogging;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    bool bFlushMercunaLogFileOnWrite;
    
    UPROPERTY(Config, EditAnywhere)
    FMerOctreeEditorSettings OctreeEditorSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FMerGridEditorSettings GridEditorSettings;
    
    UMerEditorSettings();

};

