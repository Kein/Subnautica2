#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDayPhase.h"
#include "HourMinute.h"
#include "UWETimeOfDayStatics.generated.h"

class UObject;
class UUWETimeOfDayComponent;

UCLASS(BlueprintType)
class UWETIMEOFDAY_API UUWETimeOfDayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWETimeOfDayStatics();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsNight(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsDaylight(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsDay(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetTimeOfDayFraction(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUWETimeOfDayComponent* GetTimeOfDayComponent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FHourMinute GetTimeOfDay(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static double GetNumGameDays(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EDayPhase GetDayPhase(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetDayNumber(UObject* WorldContextObject);
    
};

