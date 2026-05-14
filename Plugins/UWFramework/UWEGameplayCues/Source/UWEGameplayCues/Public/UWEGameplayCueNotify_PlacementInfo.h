#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EUWEGameplayCueNotify_AttachPolicy.h"
#include "UWEGameplayCueNotify_PlacementInfo.generated.h"

USTRUCT(BlueprintType)
struct FUWEGameplayCueNotify_PlacementInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SocketName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EUWEGameplayCueNotify_AttachPolicy AttachPolicy;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EAttachmentRule AttachmentRule;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bOverrideRotation: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bOverrideScale: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator RotationOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector ScaleOverride;
    
    UWEGAMEPLAYCUES_API FUWEGameplayCueNotify_PlacementInfo();
};

