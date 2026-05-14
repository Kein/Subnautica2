#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "UWESaveObject.h"
#include "UWEAttachmentReplicationStateArray.h"
#include "UWEAttachmentState.h"
#include "UWEAttachmentStateSaveData.h"
#include "UWEENetworkedAttachmentConfig.h"
#include "UWEPawnAttachmentOwner.generated.h"

class AActor;
class USceneComponent;
class UUWESaveHandle;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPAWNATTACHMENT_API UUWEPawnAttachmentOwner : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUWENetworkedAttachmentDelegate, AActor*, Actor, const FName&, SlotName);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FUWEENetworkedAttachmentConfig> Configs;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<FUWEAttachmentState> States;
    
    UPROPERTY(Replicated)
    FUWEAttachmentReplicationStateArray ReplicationStates;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleInstanceOnly)
    TArray<FUWEAttachmentStateSaveData> StateSaveData;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<FUWEAttachmentState> BackupStates;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleInstanceOnly)
    TArray<USceneComponent*> AttachmentComponentsCache;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisableServerConfirmation;
    
public:
    UPROPERTY(BlueprintAssignable)
    FUWENetworkedAttachmentDelegate OnAttachStarted;
    
    UPROPERTY(BlueprintAssignable)
    FUWENetworkedAttachmentDelegate OnAttachInterpolationToSocketIsDone;
    
    UPROPERTY(BlueprintAssignable)
    FUWENetworkedAttachmentDelegate OnAttachAnimationIsDone;
    
    UPROPERTY(BlueprintAssignable)
    FUWENetworkedAttachmentDelegate OnAttachFinished;
    
    UPROPERTY(BlueprintAssignable)
    FUWENetworkedAttachmentDelegate OnDetachStarted;
    
    UPROPERTY(BlueprintAssignable)
    FUWENetworkedAttachmentDelegate OnDetachAnimationIsDone;
    
    UPROPERTY(BlueprintAssignable)
    FUWENetworkedAttachmentDelegate OnDetachFinished;
    
    UUWEPawnAttachmentOwner(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnAttachmentOwnerPlayMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsSlotOccupied(const FName& SlotName);
    
    UFUNCTION(BlueprintCallable)
    bool IsAttached_BP(AActor* Attachment);
    
    UFUNCTION(BlueprintPure)
    bool IsAnySlotAnimating() const;
    
    UFUNCTION(BlueprintCallable)
    bool InitiateDetachmentBySlot_BP(const FName& SlotName, bool CheckIfAlreadyDetached, bool FastForward);
    
    UFUNCTION(BlueprintCallable)
    bool InitiateDetachmentByActor_BP(AActor* Attachment, bool CheckIfAlreadyDetached, bool FastForward);
    
    UFUNCTION(BlueprintCallable)
    bool InitiateAttachmentToClosestAvailableSlot_BP(AActor* Attachment);
    
    UFUNCTION(BlueprintCallable)
    bool InitiateAttachment_BP(AActor* Attachment, const FName& SlotName);
    
    UFUNCTION(BlueprintCallable)
    bool InitiateAllDetachment_BP(bool FastForward);
    
    UFUNCTION(BlueprintPure)
    FTransform GetAttachedPawnTransform() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAttachedPawnsCount() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetAttachedPawns() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanAttachAnywhere_BP(AActor* Attachment);
    
    UFUNCTION(BlueprintCallable)
    bool CanAttach_BP(AActor* Attachment, const FName& SlotName);
    

    // Fix for true pure virtual functions not being implemented
};

