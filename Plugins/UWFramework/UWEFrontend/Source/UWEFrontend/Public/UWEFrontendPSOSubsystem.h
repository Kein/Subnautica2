#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UWEFrontendPSOSubsystem.generated.h"

class UPSOPrecacheDataAsset;

UCLASS(BlueprintType)
class UWEFRONTEND_API UUWEFrontendPSOSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UUWEFrontendPSOSubsystem();

    UFUNCTION(BlueprintCallable)
    void StartPSOBatching();
    
    UFUNCTION(BlueprintCallable)
    void SoftLoadForPSOPrecache(const UPSOPrecacheDataAsset* LoadedDataAsset);
    
};

