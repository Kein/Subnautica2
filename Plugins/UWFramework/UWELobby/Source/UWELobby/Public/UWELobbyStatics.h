#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWELobbyStatics.generated.h"

class UWorld;

UCLASS(BlueprintType)
class UWELOBBY_API UUWELobbyStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWELobbyStatics();

    UFUNCTION(BlueprintCallable)
    static void SetWorldLevel(const FString& LevelName);
    
    UFUNCTION(BlueprintPure)
    static bool IsCustomWorldLevel();
    
    UFUNCTION(BlueprintPure)
    static FString GetWorldLevelName();
    
    UFUNCTION(BlueprintPure)
    static TSoftObjectPtr<UWorld> GetWorldLevel();
    
    UFUNCTION(BlueprintPure)
    static FString GetTailscaleIp();
    
    UFUNCTION(BlueprintPure)
    static FString GetLocalIP();
    
    UFUNCTION(BlueprintCallable)
    static void CopyToClipboard(const FString& String);
    
};

