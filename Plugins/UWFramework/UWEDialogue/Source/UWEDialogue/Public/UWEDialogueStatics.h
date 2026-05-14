#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWEDialogueStatics.generated.h"

class AActor;
class APawn;
class APlayerState;
class UObject;
class UUWEDialogueNode;

UCLASS(BlueprintType)
class UWEDIALOGUE_API UUWEDialogueStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEDialogueStatics();

    UFUNCTION(BlueprintCallable)
    static void SkipCurrentDialogueForPlayer(APawn* Player);
    
    UFUNCTION(BlueprintCallable)
    static void SkipAllDialogueForPlayer(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PlayDialogueWithinProximity(UObject* WorldContextObject, UUWEDialogueNode* Dialogue, FVector CenterLocation, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayDialogueForPlayer(UUWEDialogueNode* Dialogue, AActor* Player);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PlayDialogue(UObject* WorldContextObject, UUWEDialogueNode* Dialogue);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayAlertForPlayer(UUWEDialogueNode* Dialogue, APlayerState* Player);
    
    UFUNCTION(BlueprintPure)
    static bool IsPlayerSafeForDialogue(APlayerState* Player);
    
    UFUNCTION(BlueprintPure)
    static bool ArePlayerAlertsSuppressed(APlayerState* Player);
    
};

