#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "UWESaveObject.h"
#include "OnPingsChangedDelegate.h"
#include "UWEPing.h"
#include "UWEPingSettingsStruct.h"
#include "UWEPingSystemComponent.generated.h"

class AActor;
class APlayerState;
class UUWEPingData;
class UUWESaveHandle;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPINGSYSTEM_API UUWEPingSystemComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnPingsChanged OnPingsChanged;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ActivePings)
    TArray<FUWEPing> ActivePings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UUWEPingData* BeaconPingData;
    
private:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY(SaveGame, ReplicatedUsing=OnRep_DefaultHiddenPings)
    TArray<FGuid> DefaultHiddenPings;
    
    UPROPERTY(SaveGame)
    TArray<FUWEPing> SavedPings;
    
    UPROPERTY(Replicated, SaveGame)
    TArray<FUWEPingSettingsStruct> PingSettings;
    
    UPROPERTY(SaveGame)
    TMap<FGuid, int32> BeaconNumberMap;
    
public:
    UUWEPingSystemComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetPingVisibilityForPlayer(APlayerState* PlayerState, FGuid UniqueID, bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPingThumbnailColor(const FGuid UniqueID, const FLinearColor NewThumbnailColor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPingLocation(const FGuid UniqueID, const FVector NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetPingDisplayName(const FGuid UniqueID, const FText NewDisplayName);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultPingVisibility(FGuid UniqueID, bool bNewValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemovePing(const FGuid UniqueID);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveAllPings();
    
protected:
    UFUNCTION()
    void OnRep_DefaultHiddenPings();
    
    UFUNCTION()
    void OnRep_ActivePings();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPingIDAlreadyRegistered(const FGuid& UniqueID);
    
    UFUNCTION(BlueprintCallable)
    bool IsPingHiddenForPlayer(FGuid Guid, const APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    FVector GetPingLocation(bool& bOutPingFound, const FGuid UniqueID);
    
    UFUNCTION(BlueprintCallable)
    FText GetPingDisplayName(bool& bOutPingFound, const FGuid UniqueID);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddPing(const FVector& Location, const FText& DisplayName, UUWEPingData* PingData, float Lifetime, AActor* Owner, AActor* TrackingActor, FGuid& OutUniqueId, bool bAllowDuplicatePings, bool bDestroyOnTrackingActorDespawn, FLinearColor PingColor);
    

    // Fix for true pure virtual functions not being implemented
};

