#pragma once
#include "CoreMinimal.h"
#include "UWESaveGameDiagnosticTab.h"
#include "UWESaveGamesTab.generated.h"

class UTexture2D;
class UUWEGameTimeCustomSaveInfoStub;

UCLASS()
class UWESAVESYSTEM_API UUWESaveGamesTab : public UUWESaveGameDiagnosticTab {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UTexture2D* ThumbnailTexture;
    
    UPROPERTY()
    UUWEGameTimeCustomSaveInfoStub* GameTimeInfoObj;
    
public:
    UUWESaveGamesTab();

};

