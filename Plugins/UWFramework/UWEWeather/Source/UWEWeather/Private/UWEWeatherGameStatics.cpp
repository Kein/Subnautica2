#include "UWEWeatherGameStatics.h"

UUWEWeatherGameStatics::UUWEWeatherGameStatics() {
}

void UUWEWeatherGameStatics::UpdateMaterialAndRenderOnTarget(UMaterialInstanceDynamic* DynamicMaterialInstance, const TArray<FMaterialParameterPair>& MaterialParameterList, UTextureRenderTarget2D* RenderTarget, UObject* WorldContextObject) {
}

FParsedVariables UUWEWeatherGameStatics::ParseStructVariables(const int32& Struct) {
    return FParsedVariables{};
}

TArray<FMaterialParameterPair> UUWEWeatherGameStatics::PackMaterialProperties(const FParsedVariables& A, const FParsedVariables& B) {
    return TArray<FMaterialParameterPair>();
}

void UUWEWeatherGameStatics::InterpolateStructs(const int32& A, const int32& B, float alpha, int32& OutResult) {
}

TMap<FName, FVector2D> UUWEWeatherGameStatics::GetVector2Variables(const FParsedVariables& ParsedVariables) {
    return TMap<FName, FVector2D>();
}

TMap<FName, FLinearColor> UUWEWeatherGameStatics::GetLinearColorVariables(const FParsedVariables& ParsedVariables) {
    return TMap<FName, FLinearColor>();
}

TMap<FName, float> UUWEWeatherGameStatics::GetFloatVariables(const FParsedVariables& ParsedVariables) {
    return TMap<FName, float>();
}

TMap<FName, FFloatInterval> UUWEWeatherGameStatics::GetFloatIntervalVariables(const FParsedVariables& ParsedVariables) {
    return TMap<FName, FFloatInterval>();
}


