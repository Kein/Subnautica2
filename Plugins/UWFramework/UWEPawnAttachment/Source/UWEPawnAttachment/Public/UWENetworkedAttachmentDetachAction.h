#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWENetworkedAttachmentDetachAction.generated.h"

class AActor;
class UUWENetworkedAttachmentDetachAction;
class UUWEPawnAttachmentOwner;

UCLASS()
class UWEPAWNATTACHMENT_API UUWENetworkedAttachmentDetachAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUWENetworkedAttachmentDetachActionCallback);
    
protected:
    UPROPERTY(Instanced)
    UUWEPawnAttachmentOwner* AttachmentOwner;
    
    UPROPERTY()
    AActor* Attachment;
    
    UPROPERTY()
    FName SlotName;
    
    UPROPERTY(BlueprintAssignable)
    FUWENetworkedAttachmentDetachActionCallback OnDetachStarted;
    
    UPROPERTY(BlueprintAssignable)
    FUWENetworkedAttachmentDetachActionCallback OnDetachAnimationIsDone;
    
    UPROPERTY(BlueprintAssignable)
    FUWENetworkedAttachmentDetachActionCallback OnDetachFinished;
    
public:
    UUWENetworkedAttachmentDetachAction();

protected:
    UFUNCTION()
    void OnDetachStartedEvent(AActor* Actor, const FName& InSlotName);
    
    UFUNCTION()
    void OnDetachFinishedEvent(AActor* Actor, const FName& InSlotName);
    
    UFUNCTION()
    void OnDetachAnimationIsDoneEvent(AActor* Actor, const FName& InSlotName);
    
public:
    UFUNCTION(BlueprintCallable)
    static UUWENetworkedAttachmentDetachAction* NetworkedAttachmentDetachActionBySlotName(UUWEPawnAttachmentOwner* InAttachmentOwner, const FName& InSlotName);
    
    UFUNCTION(BlueprintCallable)
    static UUWENetworkedAttachmentDetachAction* NetworkedAttachmentDetachActionByActor(UUWEPawnAttachmentOwner* InAttachmentOwner, AActor* InAttachment);
    
};

