#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWEBioBedStatics.generated.h"

class APawn;
class AUWEBioBedBase;

UCLASS(BlueprintType)
class UWEBIOBED_API UUWEBioBedStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEBioBedStatics();

    UFUNCTION(BlueprintCallable)
    static void UnassignPawnFromBioBed(const APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    static void SpawnPawnAtBioBed(APawn* Pawn, AUWEBioBedBase* biobed);
    
    UFUNCTION(BlueprintPure)
    static bool IsPlayerAssignedToBioBed(AUWEBioBedBase* biobed, const APawn* Player);
    
    UFUNCTION(BlueprintPure)
    static bool IsPlayerAssignedToAnyBioBed(const APawn* Pawn);
    
    UFUNCTION(BlueprintPure)
    static bool IsLocalPlayerAssignedToBioBed(AUWEBioBedBase* biobed);
    
    UFUNCTION(BlueprintCallable)
    static void AssignPawnToBioBed(const APawn* Pawn, AUWEBioBedBase* biobed);
    
};

