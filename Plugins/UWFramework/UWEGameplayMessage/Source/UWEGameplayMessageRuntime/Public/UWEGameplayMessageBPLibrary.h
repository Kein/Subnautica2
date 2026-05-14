#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "UWEGameplayMessageBPLibrary.generated.h"

class AActor;
class APlayerController;
class APlayerState;
class UInputAction;
class UObject;

UCLASS(BlueprintType)
class UWEGAMEPLAYMESSAGERUNTIME_API UUWEGameplayMessageBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEGameplayMessageBPLibrary();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerState* PlayerStateFromPlayerId(UObject* WorldContextObject, int32 PlayerId);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 PlayerIdFromPlayerState(UObject* WorldContextObject, APlayerState* PlayerState);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 PlayerIdFromPawn(UObject* WorldContextObject, const AActor* PawnActor);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 PlayerIdFromController(UObject* WorldContextObject, const APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifyPlayerSystemMessage(UObject* WorldContextObject, FGameplayTag Severity, FText Message, AActor* PlayerActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifyPlayerLocalized(UObject* WorldContextObject, FGameplayTag Severity, FName StringTableID, const FString& StringTableKey, TArray<FText> TextArgs, const AActor* PlayerActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifyLocalPlayerSimple(UObject* WorldContextObject, FGameplayTag Severity, FText Message);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifyLocalPlayer(UObject* WorldContextObject, FGameplayTag Severity, FText Message, TArray<FText> TextArgs, UInputAction* InputAction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifyAllPlayersString(UObject* WorldContextObject, const FString& String, int32 FromPlayerId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifyAllPlayersLocalized(UObject* WorldContextObject, FGameplayTag Severity, FName StringTableID, const FString& StringTableKey, TArray<FText> TextArgs, int32 FromPlayerId);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 LocalPlayerId(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void K2_SendGameplayMessageToSelf(UObject* WorldContextObject, const FGameplayTag Channel, const int32& Message);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void K2_SendGameplayMessageToPlayer(UObject* WorldContextObject, const FGameplayTag Channel, const int32& Message, const int32 PlayerId, int32 FromPlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void K2_SendGameplayMessageToOtherPlayers(UObject* WorldContextObject, const FGameplayTag Channel, const int32& Message, const int32 FromPlayerId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void K2_SendGameplayMessageToAllPlayers(UObject* WorldContextObject, FGameplayTag Channel, const int32& Message, int32 FromPlayerId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BroadcastStringMessageToAllPlayers(UObject* WorldContextObject, const FString& StringMessage);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<int32> AllPlayerIds(UObject* WorldContextObject);
    
};

