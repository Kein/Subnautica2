#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "SN2CompassStrip.generated.h"

class UCommonTextStyle;

UCLASS(EditInlineNew)
class SUBNAUTICA2_API USN2CompassStrip : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCommonTextStyle> MajorStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCommonTextStyle> MinorStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCommonTextStyle> NumberStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LineSpacing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText North;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText NorthEast;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText East;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText SouthEast;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText South;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText SouthWest;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText West;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText NorthWest;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Heading;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush DividerLine;
    
public:
    USN2CompassStrip();

};

