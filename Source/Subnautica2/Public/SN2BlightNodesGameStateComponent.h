#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWESaveObject.h"
#include "SN2BlightNodesGameStateComponent.generated.h"

class AActor;
class UObject;
class USN2BlightNodeDataAsset;
class USN2BlightNodesGameStateComponent;
class UUWESaveHandle;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2BlightNodesGameStateComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBlightNodeRemediationStatusChangedMulticast, USN2BlightNodeDataAsset*, DataAsset, bool, Remediated);
    
protected:
    UPROPERTY(SaveGame)
    TSet<USN2BlightNodeDataAsset*> RemediatedNodes;
    
    UPROPERTY(ReplicatedUsing=OnRep_RemediatedNodesCopy)
    TArray<USN2BlightNodeDataAsset*> RemediatedNodesCopy;
    
private:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY()
    TMap<USN2BlightNodeDataAsset*, FOnBlightNodeRemediationStatusChangedMulticast> RemediatedChangeListeners;
    
public:
    USN2BlightNodesGameStateComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_RemediatedNodesCopy();
    
public:
    UFUNCTION(BlueprintPure)
    bool HasBlightNodeBeenRemediated(const AActor* node) const;
    
    UFUNCTION(BlueprintPure)
    bool HasBlightNodeAssetBeenRemediated(const USN2BlightNodeDataAsset* DataAsset) const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USN2BlightNodesGameStateComponent* GetBlightNodesStateComponent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static USN2BlightNodeDataAsset* GetBlightNodeDataAssetForActor(const AActor* node);
    

    // Fix for true pure virtual functions not being implemented
};

