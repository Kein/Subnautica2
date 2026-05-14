#pragma once
#include "CoreMinimal.h"
#include "UWEEquipmentAttachmentRules.generated.h"

USTRUCT(BlueprintType)
struct UWEINVENTORY_API FUWEEquipmentAttachmentRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSetParentAsLeaderPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseExplicitAttachmentSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AttachmentSocketName;
    
    FUWEEquipmentAttachmentRules();
};

