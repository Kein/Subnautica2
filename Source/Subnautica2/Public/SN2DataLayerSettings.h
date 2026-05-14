#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SN2DataLayerSettings.generated.h"

class UDataLayerAsset;
class USN2DataLayerSettings;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class SUBNAUTICA2_API USN2DataLayerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TArray<TSoftObjectPtr<UDataLayerAsset>> ActivatedInShipping;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TArray<TSoftObjectPtr<UDataLayerAsset>> UnloadedInShipping;
    
    USN2DataLayerSettings();

    UFUNCTION(BlueprintPure)
    static USN2DataLayerSettings* Get();
    
};

