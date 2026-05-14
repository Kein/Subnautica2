#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEImGuiComponent.h"
#include "MapData.h"
#include "SN2MapDebugger.generated.h"

class UTexture2D;

UCLASS(ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2MapDebugger : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTexture2D* ArrowTexture;
    
    UPROPERTY()
    UTexture2D* MarkerTexture;
    
    UPROPERTY()
    int32 CurrentMapIndex;
    
    UPROPERTY(Config)
    FString MapsFilename;
    
private:
    UPROPERTY()
    TArray<FMapData> MapData;
    
    UPROPERTY()
    FVector CursorPos;
    
public:
    USN2MapDebugger(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    TArray<FString> GetWorldPopActorNames();
    
    UFUNCTION()
    TArray<FVector> GetSpawnPointsForFuzzyActorName(const FString& ActorName);
    
};

