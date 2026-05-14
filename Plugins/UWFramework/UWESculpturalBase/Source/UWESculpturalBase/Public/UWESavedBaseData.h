#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UWESculpturalBaseCell.h"
#include "UWESavedBaseData.generated.h"

UCLASS(BlueprintType)
class UWESCULPTURALBASE_API UUWESavedBaseData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FUWESculpturalBaseCell> Cells;
    
    UUWESavedBaseData();

};

