#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SN2PIEUserSettings.generated.h"

class USN2PIEUserSettings;

UCLASS(BlueprintType, Config=Game)
class SUBNAUTICA2_API USN2PIEUserSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    FString PIEGameModeOverride;
    
    USN2PIEUserSettings();

    UFUNCTION(BlueprintPure)
    bool TryGetOverrideGameModeAlias(FString& alias) const;
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideGameModeAlias(const FString& alias);
    
    UFUNCTION(BlueprintPure)
    static USN2PIEUserSettings* GetPIEUserSettings();
    
};

