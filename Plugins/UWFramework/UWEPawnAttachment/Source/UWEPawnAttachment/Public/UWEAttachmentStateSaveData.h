#pragma once
#include "CoreMinimal.h"
#include "UWEActorUID.h"
#include "EUWEAttachmentStateSaveLoadingStage.h"
#include "UWEAttachmentStateSaveData.generated.h"

USTRUCT(BlueprintType)
struct UWEPAWNATTACHMENT_API FUWEAttachmentStateSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FUWEActorUID AttachmentSaveId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    EUWEAttachmentStateSaveLoadingStage LoadingStage;
    
    FUWEAttachmentStateSaveData();
};

