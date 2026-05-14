#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWEUserGeneratedContentStatics.generated.h"

class UObject;

UCLASS(BlueprintType, Config=Game)
class UWEUSERGENERATEDCONTENT_API UUWEUserGeneratedContentStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEUserGeneratedContentStatics();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GameHasUGC(UObject* WorldContextObject);
    
};

