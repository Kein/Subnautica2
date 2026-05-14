#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "UWEGameplayStatics.generated.h"

class AActor;
class ACharacter;
class AUWEGameStateBase;
class AUWEGameplayPlayerController;
class UObject;

UCLASS(BlueprintType)
class UWEGAMEPLAY_API UUWEGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEGameplayStatics();

    UFUNCTION(BlueprintPure)
    static void GetStaticGameplayTags(const AActor* Actor, FGameplayTagContainer& TagContainer);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AUWEGameplayPlayerController* GetLocalGameplayPlayerController(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ACharacter* GetLocalGameplayPlayerCharacter(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AUWEGameStateBase* GetGameState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static void GetGameplayTags(const AActor* Actor, FGameplayTagContainer& TagContainer);
    
};

