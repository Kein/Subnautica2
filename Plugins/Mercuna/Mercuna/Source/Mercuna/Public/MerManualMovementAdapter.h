#pragma once
#include "CoreMinimal.h"
#include "MercunaMovementAdapter.h"
#include "MerManualMovementAdapter.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class MERCUNA_API UMerManualMovementAdapter : public UMercunaMovementAdapter {
    GENERATED_BODY()
public:
    UMerManualMovementAdapter();

};

