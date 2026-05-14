#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "UWEPlayerCameraManagerSettings.h"
#include "EUWEENetworkedAttachmentCameraControl.h"
#include "EUWEENetworkedAttachmentVelocityCalculation.h"
#include "EUWENetworkedAttachmentSocketRule.h"
#include "UWENetworkedAttachmentAnimationConfig.h"
#include "UWENetworkedAttachmentSocketInterpolationConfig.h"
#include "UWEENetworkedAttachmentConfig.generated.h"

class UGameplayAbility;
class UInputMappingContext;

USTRUCT(BlueprintType)
struct UWEPAWNATTACHMENT_API FUWEENetworkedAttachmentConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagQuery TagFilter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag AttachPointTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool GenerateConfigsBySocketsWithPrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AttachmentSocketNamePrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AttachmentSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWENetworkedAttachmentSocketRule AttachmentRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWENetworkedAttachmentSocketInterpolationConfig AttachmentSocketInterpolationConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWENetworkedAttachmentSocketRule DetachmentRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName DetachmentSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWENetworkedAttachmentSocketInterpolationConfig DetachmentSocketInterpolationConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FindProperDetachmentSpotAroundOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FindProperDetachmentSpotOnlyAroundOwnerRootCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWEENetworkedAttachmentCameraControl CameraControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEPlayerCameraManagerSettings CameraManagerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWENetworkedAttachmentAnimationConfig AttachAnimationConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWENetworkedAttachmentAnimationConfig DetachAnimationConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ChangeInputMappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftClassPtr<UGameplayAbility>> GrantedAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UInputMappingContext* InputMappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWEENetworkedAttachmentVelocityCalculation VelocityCalculation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer GrantedTagsForAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer GrantedTagsForAttachmentOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag AttachBeginCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag AttachEndCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag DetachBeginCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag DetachEndCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PreventCMCFallingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowGameSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDebug;
    
    FUWEENetworkedAttachmentConfig();
};

