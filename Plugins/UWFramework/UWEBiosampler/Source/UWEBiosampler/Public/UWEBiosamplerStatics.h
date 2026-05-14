#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWEBiosamplerStatics.generated.h"

class UUWEItemType;

UCLASS(BlueprintType)
class UWEBIOSAMPLER_API UUWEBiosamplerStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEBiosamplerStatics();

    UFUNCTION(BlueprintPure)
    static UUWEItemType* GetBiosampleItemType();
    
};

