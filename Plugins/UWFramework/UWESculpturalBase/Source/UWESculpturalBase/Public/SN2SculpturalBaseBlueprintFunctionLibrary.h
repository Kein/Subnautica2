#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SN2SculpturalBaseBlueprintFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class UWESCULPTURALBASE_API USN2SculpturalBaseBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USN2SculpturalBaseBlueprintFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static TArray<FString> SortStringArray(TArray<FString> Array);
    
};

