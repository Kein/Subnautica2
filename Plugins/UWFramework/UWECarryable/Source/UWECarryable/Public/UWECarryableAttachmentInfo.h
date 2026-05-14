#pragma once
#include "CoreMinimal.h"
#include "UWECarryableAttachmentInfo.generated.h"

class AActor;
class USceneComponent;

USTRUCT(BlueprintType)
struct FUWECarryableAttachmentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> CarryableActor;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<USceneComponent> ParentComponent;
    
    UPROPERTY(BlueprintReadOnly)
    FName Socket;
    
    UPROPERTY(BlueprintReadOnly)
    bool UseTransition;
    
    UWECARRYABLE_API FUWECarryableAttachmentInfo();
};

