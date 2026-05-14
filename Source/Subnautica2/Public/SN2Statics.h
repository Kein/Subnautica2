#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "Curves/CurveFloat.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "UWETargetActor.h"
#include "EUWEMovementComponentInfluenceType.h"
#include "Templates/SubclassOf.h"
#include "SN2Statics.generated.h"

class AActor;
class APawn;
class APlayerController;
class ASN2GameState;
class ASN2PlayerCharacter;
class ASN2PlayerController;
class ASN2PlayerState;
class AUWEBaseItem;
class UActorComponent;
class UFileMediaSource;
class UGameplayEffect;
class UObject;
class USN2LocalPlayer;
class USplineComponent;
class UUWEBreakableData;
class UUWECuttableData;
class UUWEEquipmentComponent;
class UUWEGameConfigComponent;
class UUWEInventoryComponent;
class UUWEInventoryRouterComponent;
class UUWEItemType;
class UUWENotificationComponent;
class UUWEPingData;
class UUWEResonatableData;
class UUWEScanData;
class UUWESubmarinePilotComponent;
class UUWEToolbarComponent;
class UWindowManager;

UCLASS(BlueprintType)
class SUBNAUTICA2_API USN2Statics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USN2Statics();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnItemWithImpulse(const UObject* WorldContextObject, UClass* ActorClass, const FTransform& ActorTransform, const FVector& Impulse);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetHiddenInSeconds(UObject* WorldContextObject, AActor* Actor, float Time, bool bNewHidden);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetActorEnableCollisionInSeconds(UObject* WorldContextObject, AActor* Actor, float Time, bool bNewEnableCollision);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveGameplayCue_NonReplicated(AActor* Target, const FGameplayTag GameplayCueTag, const FGameplayCueParameters& Parameters);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool PlayerPickupActor(AActor* PlayerCharacter, AActor* Pickupable, const FHitResult& HitResult);
    
    UFUNCTION()
    static void LogToScreen(const FString& Message, bool LongLasting);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool LocalPlayerHasTag(UObject* WorldContextObject, FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    static void LeaveMenu();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsStandalone(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsListenServer(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool IsDedicatedServer(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsClient(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsActorWeldable(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static bool IsActorScannable(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static bool IsActorPingable(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static bool IsActorItemType(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static bool IsActorCuttable(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static bool IsActorBreakable(const AActor* Actor);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UWindowManager* GetWindowManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static float GetValueFromRuntimeCurve(const FRuntimeFloatCurve Curve, float Time);
    
    UFUNCTION(BlueprintPure)
    static FVector GetValidLocationForDroppedItem(ASN2PlayerCharacter* Player, const AActor* Item);
    
    UFUNCTION(BlueprintPure)
    static UUWEItemType* GetTypeDataForSourceObject(const UObject* ContextObject);
    
    UFUNCTION(BlueprintPure)
    static UUWEItemType* GetTypeDataForActor(const AActor* Actor);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetShowOutlinesEnabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetServerName(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UUWEScanData* GetScanDataForActor(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static UUWEResonatableData* GetResonatableDataForActor(const AActor* Actor);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FString> GetPlayerNames(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ASN2PlayerCharacter* GetPlayerCharacterFromPlayerState(const ASN2PlayerState* PlayerState);
    
    UFUNCTION(BlueprintPure)
    static UUWEPingData* GetPingDataForActor(const AActor* Actor);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetPickupForceFeedbackEnabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUWEToolbarComponent* GetLocalToolbarComponent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUWESubmarinePilotComponent* GetLocalSubmarinePilotComponent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASN2PlayerState* GetLocalPlayerState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUWEInventoryRouterComponent* GetLocalPlayerInventoryRouter(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUWEInventoryComponent* GetLocalPlayerInventory(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetLocalPlayerID(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASN2PlayerController* GetLocalPlayerController(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASN2PlayerCharacter* GetLocalPlayerCharacter(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USN2LocalPlayer* GetLocalPlayer(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APawn* GetLocalPawn(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUWENotificationComponent* GetLocalNotificationComponent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUWEInventoryRouterComponent* GetLocalInventoryRouterComponent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AUWEBaseItem* GetLocalEquippedTool(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUWEEquipmentComponent* GetLocalEquipmentComponent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UFileMediaSource* GetLifepodVideoForPlatform(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetLargeTextScalingEnabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FKey GetInvalidKeyInBlueprint();
    
    UFUNCTION(BlueprintPure)
    static FKey GetInvalidGamepadKeyInBlueprint();
    
    UFUNCTION(BlueprintPure)
    static FTransform GetInteractTransform(AActor* Actor);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FUWETargetActor GetHoverTarget(UObject* WorldContextObject, float MaxDistance);
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASN2GameState* GetGameState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUWEGameConfigComponent* GetGameConfig(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool GetFeatureFlag(const FString& Feature);
    
    UFUNCTION(BlueprintPure)
    static float GetDateTimeAlpha(FDateTime StartDateTime, FDateTime TargetDateTime, FDateTime CurrentDateTime);
    
    UFUNCTION(BlueprintPure)
    static UUWECuttableData* GetCuttableDataForActor(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static UActorComponent* GetComponentFromReference(AActor* Owner, FComponentReference Reference);
    
    UFUNCTION(BlueprintPure)
    static UUWEBreakableData* GetBreakableDataForActor(const AActor* Actor);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetAnalyticsEnabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FString GetActorTypeLink(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static FQuat GetActorQuat(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static FGameplayTag GameplayTagFromString(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    static void ForcePhysicsTransformUpdate(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static APlayerController* FindLocalPlayerControllerFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static UUWEInventoryComponent* FindInventoryFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> ExtractComputerTextInterfaceProgressBarTags(const FString& InText);
    
    UFUNCTION(BlueprintCallable)
    static void ExitProcess();
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteGameplayCue_NonReplicated(AActor* Target, const FGameplayTag GameplayCueTag, const FGameplayCueParameters& Parameters);
    
    UFUNCTION(BlueprintCallable)
    static void EnterMenu();
    
    UFUNCTION(BlueprintCallable)
    static void CrashProcessWithStackOverflow();
    
    UFUNCTION(BlueprintCallable)
    static void CrashProcessWithNullPointerException();
    
    UFUNCTION(BlueprintCallable)
    static void CrashProcessWithMemoryCorruption();
    
    UFUNCTION(BlueprintCallable)
    static void CrashProcess();
    
    UFUNCTION(BlueprintCallable)
    static void CopySplineSetup(USplineComponent* SplineComponentSource, USplineComponent* SplineComponentDestination);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString ConsoleCommand(UObject* WorldContextObject, const FString& Cmd);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearAllNotifications(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool CanPlayerPickupActor(AActor* PlayerCharacter, AActor* Pickupable, const FHitResult& HitResult, FGameplayTag& Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyDamageType(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Damage, FGameplayTag DamageType, AActor* EffectCauser, FHitResult HitResult) const;
    
    UFUNCTION(BlueprintCallable)
    static void AddOptionToOptionsString(FString& Options, const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void AddImpulseToItem(AUWEBaseItem* Item, const FVector& Impulse);
    
    UFUNCTION(BlueprintCallable)
    static void AddImpulseToActor(AActor* Actor, const FVector& Impulse);
    
    UFUNCTION(BlueprintCallable)
    static void AddGameplayCue_NonReplicated(AActor* Target, const FGameplayTag GameplayCueTag, const FGameplayCueParameters& Parameters);
    
    UFUNCTION(BlueprintCallable)
    static void AddExternalVelocityToActor(AActor* Actor, FVector Velocity, float MaxActorVolume, bool ScaleWithMaxActorVolume);
    
    UFUNCTION(BlueprintCallable)
    static void AddExternalInfluenceToActor(AActor* Actor, EUWEMovementComponentInfluenceType InfluenceType, const FVector& Value);
    
};

