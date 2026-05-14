#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MercunaUsageTypes.h"
#include "MercunaBlueprintLibrary.generated.h"

class AActor;

UCLASS(BlueprintType)
class MERCUNA_API UMercunaBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMercunaBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetDebugActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void MercunaLog(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static void MercunaFlushLog();
    
    UFUNCTION(BlueprintCallable)
    static bool HasUsageType(FMercunaUsageTypes UsageTypes, FName UsageTypeName);
    
    UFUNCTION(BlueprintCallable)
    static void ClearDebugActor();
    
};

