#pragma once
#include "CoreMinimal.h"
#include "UWEUnlockNotificationPackage.generated.h"

class UTexture2D;
class UUWEDialogueStoryEvent;

USTRUCT(BlueprintType)
struct FUWEUnlockNotificationPackage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FText HeaderText;
    
    UPROPERTY(BlueprintReadOnly)
    FText HeaderSubText;
    
    UPROPERTY(BlueprintReadOnly)
    FText Name;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<UTexture2D> Thumbnail;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWEDialogueStoryEvent* TriggeredDialogue;
    
    UPROPERTY(BlueprintReadOnly)
    FText NotificationTextOverride;
    
    UWEUNLOCKABLES_API FUWEUnlockNotificationPackage();
};

