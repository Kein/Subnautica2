#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWENetworkedAttachmentAttachAction.generated.h"

class AActor;
class UUWENetworkedAttachmentAttachAction;
class UUWEPawnAttachmentOwner;

UCLASS()
class UWEPAWNATTACHMENT_API UUWENetworkedAttachmentAttachAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUWENetworkedAttachmentAttachActionCallback);
    
protected:
    UPROPERTY(Instanced)
    UUWEPawnAttachmentOwner* AttachmentOwner;
    
    UPROPERTY()
    AActor* Attachment;
    
    UPROPERTY()
    FName SlotName;
    
    UPROPERTY(BlueprintAssignable)
    FUWENetworkedAttachmentAttachActionCallback OnAttachStarted;
    
    UPROPERTY(BlueprintAssignable)
    FUWENetworkedAttachmentAttachActionCallback OnAttachInterpolationToSocketIsDone;
    
    UPROPERTY(BlueprintAssignable)
    FUWENetworkedAttachmentAttachActionCallback OnAttachAnimationIsDone;
    
    UPROPERTY(BlueprintAssignable)
    FUWENetworkedAttachmentAttachActionCallback OnAttachFinished;
    
public:
    UUWENetworkedAttachmentAttachAction();

protected:
    UFUNCTION()
    void OnAttachStartedEvent(AActor* Actor, const FName& InSlotName);
    
    UFUNCTION()
    void OnAttachInterpolationToSocketIsDoneEvent(AActor* Actor, const FName& InSlotName);
    
    UFUNCTION()
    void OnAttachFinishedEvent(AActor* Actor, const FName& InSlotName);
    
    UFUNCTION()
    void OnAttachAnimationIsDoneEvent(AActor* Actor, const FName& InSlotName);
    
public:
    UFUNCTION(BlueprintCallable)
    static UUWENetworkedAttachmentAttachAction* NetworkedAttachmentAttachAction(UUWEPawnAttachmentOwner* InAttachmentOwner, AActor* InAttachment, const FName& InSlotName);
    
};

