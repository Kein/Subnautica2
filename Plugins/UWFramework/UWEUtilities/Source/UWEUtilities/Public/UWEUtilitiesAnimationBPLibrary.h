#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWEUtilitiesAnimationBPLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class UWEUTILITIES_API UUWEUtilitiesAnimationBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEUtilitiesAnimationBPLibrary();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEditorPreviewWorld(const UObject* WorldContextObject);
    
};

