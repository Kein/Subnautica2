#pragma once
#include "CoreMinimal.h"
#include "ECommonUserPrivilegeResult.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EUWEUserPrivilege.h"
#include "EUWEFrontendMenuReturnReason.h"
#include "UWEShaderCacheStatistics.h"
#include "UWEFrontendStatics.generated.h"

class UObject;
class UWorld;

UCLASS(BlueprintType, MinimalAPI, Config=Game)
class UUWEFrontendStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEFrontendStatics();

    UFUNCTION(BlueprintPure)
    static bool ShouldHoldForShaderPrecompilation();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReturnToFrontendByName(const UObject* WorldContextObject, const FName& FrontendLevelName, EUWEFrontendMenuReturnReason ReturnReason);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReturnToFrontend(const UObject* WorldContextObject, TSoftObjectPtr<UWorld> FrontendLevel, EUWEFrontendMenuReturnReason ReturnReason);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrintCacheStats(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsFirstTimeBoot();
    
    UFUNCTION(BlueprintPure)
    static FUWEShaderCacheStatistics GetShaderCacheStatistics();
    
    UFUNCTION(BlueprintPure)
    static FText GetPrivilegeErrorText(ECommonUserPrivilegeResult UserPrivilege);
    
    UFUNCTION(BlueprintPure)
    static int32 GetNumberOfShaderPrecompilesRemaining();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool DoUserPrivilegeCheck(UObject* WorldContextObject, const FPlatformUserId& PlatformUserId, EUWEUserPrivilege UserPrivilege, FText& ErrorMessage, bool bShowErrorMessage, bool bShowResolveUI);
    
    UFUNCTION(BlueprintPure)
    static bool DoesSwitchExistOnCommandLine(const FString& Switch);
    
};

