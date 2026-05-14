#pragma once
#include "CoreMinimal.h"
#include "EUWEEffectActivationThreshold.h"
#include "EUWEEffectParamSource.h"
#include "EUWEVectorAxis.h"
#include "Templates/SubclassOf.h"
#include "UWEParamFetchFunction.h"
#include "UWEEffectParam.generated.h"

class UCurveFloat;
class UUWECueParamFetchFunction;

USTRUCT(BlueprintType)
struct FUWEEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ParamName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EUWEEffectParamSource Source;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Socket;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UWEParamFetchFunction FetchFunction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EUWEVectorAxis Axis;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bLocalSpace;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseHitLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UUWECueParamFetchFunction> CustomFetchFunction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bNormalize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Multiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DefaultValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAbsoluteValues;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bInvert;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseMinValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OverrideMaxValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* EvalCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StaticValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EUWEEffectActivationThreshold ActivationThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ActivationValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDebug;
    
private:
    UPROPERTY()
    UUWECueParamFetchFunction* FetchFunctionInstance;
    
public:
    UWEGAMEPLAYCUES_API FUWEEffectParam();
};

