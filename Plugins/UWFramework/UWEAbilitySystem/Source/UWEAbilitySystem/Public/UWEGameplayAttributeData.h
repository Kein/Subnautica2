#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "UWEGameplayAttributeData.generated.h"

USTRUCT(BlueprintType)
struct FUWEGameplayAttributeData : public FGameplayAttributeData {
    GENERATED_BODY()
public:
    UWEABILITYSYSTEM_API FUWEGameplayAttributeData();
};

