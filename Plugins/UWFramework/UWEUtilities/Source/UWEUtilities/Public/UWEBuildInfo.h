#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWEBuildInfo.generated.h"

UCLASS(BlueprintType)
class UWEUTILITIES_API UUWEBuildInfo : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEBuildInfo();

    UFUNCTION(BlueprintPure)
    static bool IsSkipBoot();
    
    UFUNCTION(BlueprintPure)
    static bool IsPlaytestBuild();
    
    UFUNCTION(BlueprintPure)
    static bool IsFinalShippingBuild();
    
    UFUNCTION(BlueprintPure)
    static bool IsDevelopmentBuild();
    
    UFUNCTION(BlueprintPure)
    static FString GetProjectVersion();
    
    UFUNCTION(BlueprintPure)
    static int32 GetNetworkBuildNumber();
    
    UFUNCTION(BlueprintPure)
    static FString GetFullProjectVersionString();
    
    UFUNCTION(BlueprintPure)
    static int32 GetBuildNumber();
    
    UFUNCTION(BlueprintPure)
    static FText GetBuildInfoText();
    
    UFUNCTION(BlueprintPure)
    static FString GetBuildBranchName();
    
};

