#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "Blueprint/UserWidget.h"
#include "SN2RadarDisplay.generated.h"

UCLASS(EditInlineNew)
class SUBNAUTICA2_API USN2RadarDisplay : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector> Points;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FGameplayTag, FSlateBrush> BrushesMap;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FSlateBrush> PointBrushes;
    
public:
    USN2RadarDisplay();

};

