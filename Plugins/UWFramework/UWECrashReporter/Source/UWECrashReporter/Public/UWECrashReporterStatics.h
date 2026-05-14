#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWECrashReporterStatics.generated.h"

UCLASS(BlueprintType)
class UWECRASHREPORTER_API UUWECrashReporterStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWECrashReporterStatics();

    UFUNCTION(BlueprintCallable)
    static bool WasLastLobbyNotReached();
    
    UFUNCTION(BlueprintCallable)
    static bool WasLastExitUnclean();
    
    UFUNCTION(BlueprintCallable)
    static void SendEvent(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static void NotifyLobbyReached();
    
};

