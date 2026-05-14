#include "UWENetworkedAttachmentDetachAction.h"

UUWENetworkedAttachmentDetachAction::UUWENetworkedAttachmentDetachAction() {
    this->AttachmentOwner = NULL;
    this->Attachment = NULL;
}

void UUWENetworkedAttachmentDetachAction::OnDetachStartedEvent(AActor* Actor, const FName& InSlotName) {
}

void UUWENetworkedAttachmentDetachAction::OnDetachFinishedEvent(AActor* Actor, const FName& InSlotName) {
}

void UUWENetworkedAttachmentDetachAction::OnDetachAnimationIsDoneEvent(AActor* Actor, const FName& InSlotName) {
}

UUWENetworkedAttachmentDetachAction* UUWENetworkedAttachmentDetachAction::NetworkedAttachmentDetachActionBySlotName(UUWEPawnAttachmentOwner* InAttachmentOwner, const FName& InSlotName) {
    return NULL;
}

UUWENetworkedAttachmentDetachAction* UUWENetworkedAttachmentDetachAction::NetworkedAttachmentDetachActionByActor(UUWEPawnAttachmentOwner* InAttachmentOwner, AActor* InAttachment) {
    return NULL;
}


