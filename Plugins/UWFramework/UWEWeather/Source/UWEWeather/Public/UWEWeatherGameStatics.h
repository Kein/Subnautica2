#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MaterialParameterPair.h"
#include "ParsedVariables.h"
#include "UWEWeatherGameStatics.generated.h"

class UMaterialInstanceDynamic;
class UObject;
class UTextureRenderTarget2D;

UCLASS(BlueprintType)
class UWEWEATHER_API UUWEWeatherGameStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEWeatherGameStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateMaterialAndRenderOnTarget(UMaterialInstanceDynamic* DynamicMaterialInstance, const TArray<FMaterialParameterPair>& MaterialParameterList, UTextureRenderTarget2D* RenderTarget, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FParsedVariables ParseStructVariables(const int32& Struct);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMaterialParameterPair> PackMaterialProperties(const FParsedVariables& A, const FParsedVariables& B);
    
    UFUNCTION(BlueprintCallable)
    static void InterpolateStructs(const int32& A, const int32& B, float alpha, int32& OutResult);
    
    UFUNCTION(BlueprintPure)
    static TMap<FName, FVector2D> GetVector2Variables(const FParsedVariables& ParsedVariables);
    
    UFUNCTION(BlueprintPure)
    static TMap<FName, FLinearColor> GetLinearColorVariables(const FParsedVariables& ParsedVariables);
    
    UFUNCTION(BlueprintPure)
    static TMap<FName, float> GetFloatVariables(const FParsedVariables& ParsedVariables);
    
    UFUNCTION(BlueprintPure)
    static TMap<FName, FFloatInterval> GetFloatIntervalVariables(const FParsedVariables& ParsedVariables);
    
};

