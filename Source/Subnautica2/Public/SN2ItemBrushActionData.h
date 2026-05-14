#pragma once
#include "CoreMinimal.h"
#include "SN2BuilderActionData.h"
#include "SN2EditMode.h"
#include "SN2ItemBrushActionData.generated.h"

UCLASS(EditInlineNew)
class SUBNAUTICA2_API USN2ItemBrushActionData : public USN2BuilderActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSN2EditMode> EditModes;
    
    USN2ItemBrushActionData();

};

