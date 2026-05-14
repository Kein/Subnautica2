#include "UWENetworkedAttachmentAttachAction.h"

UUWENetworkedAttachmentAttachAction::UUWENetworkedAttachmentAttachAction() {
    this->AttachmentOwner = NULL;
    this->Attachment = NULL;
}

void UUWENetworkedAttachmentAttachAction::OnAttachStartedEvent(AActor* Actor, const FName& InSlotName) {
}

void UUWENetworkedAttachmentAttachAction::OnAttachInterpolationToSocketIsDoneEvent(AActor* Actor, const FName& InSlotName) {
}

void UUWENetworkedAttachmentAttachAction::OnAttachFinishedEvent(AActor* Actor, const FName& InSlotName) {
}

void UUWENetworkedAttachmentAttachAction::OnAttachAnimationIsDoneEvent(AActor* Actor, const FName& InSlotName) {
}

UUWENetworkedAttachmentAttachAction* UUWENetworkedAttachmentAttachAction::NetworkedAttachmentAttachAction(UUWEPawnAttachmentOwner* InAttachmentOwner, AActor* InAttachment, const FName& InSlotName) {
    return NULL;
}


