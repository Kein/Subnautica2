#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWEBiomodStatics.generated.h"

class AActor;
class APlayerState;
class UObject;
class UUWEBioAbilityData;

UCLASS(BlueprintType)
class UWEBIOMODS_API UUWEBiomodStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEBiomodStatics();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ShouldIgnoreUnlockBiomodRequirements(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool HasBioScanCapability(APlayerState* PS);
    
    UFUNCTION(BlueprintPure)
    static bool HasBioAbility(const UUWEBioAbilityData* BioAbilityData, const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static bool HasActiveBioAbility(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static TArray<UUWEBioAbilityData*> GetInstalledPassiveBioAbilities(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static TArray<UUWEBioAbilityData*> GetInstalledAbilities(const AActor* Actor);
    
};

