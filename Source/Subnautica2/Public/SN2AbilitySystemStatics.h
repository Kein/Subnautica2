#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "SN2AbilitySystemStatics.generated.h"

class AActor;
class ASN2BaseCharacter;
class ASN2PlayerCharacter;
class ASN2PlayerController;
class ASN2PlayerState;
class AUWEBaseItem;
class UUWEEquipmentComponent;
class UUWEGameplayAbility;
class UUWEInventoryComponent;
class UUWEInventoryRouterComponent;
class UUWELoopingCuesComponent;
class UUWEPawnAttachmentOwner;
class UUWEToolbarComponent;

UCLASS(BlueprintType)
class SUBNAUTICA2_API USN2AbilitySystemStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USN2AbilitySystemStatics();

    UFUNCTION(BlueprintPure)
    static bool IsAvatarActorAttached(const UUWEGameplayAbility* GameplayAbility, UUWEPawnAttachmentOwner*& OutAttachedToActor);
    
    UFUNCTION(BlueprintPure)
    static bool HasToolEquipped(const UUWEGameplayAbility* GameplayAbility, TSoftClassPtr<AActor> ActorSoftClass);
    
    UFUNCTION(BlueprintPure)
    static bool HasAnyToolEquipped(const UUWEGameplayAbility* GameplayAbility);
    
    UFUNCTION(BlueprintPure)
    static AUWEBaseItem* GetToolFromAbilityActorInfo(const UUWEGameplayAbility* GameplayAbility);
    
    UFUNCTION(BlueprintPure)
    static UUWEToolbarComponent* GetToolbarFromAbilityActorInfo(const UUWEGameplayAbility* GameplayAbility);
    
    UFUNCTION(BlueprintPure)
    static ASN2PlayerState* GetPlayerStateFromAbilityActorInfo(const UUWEGameplayAbility* GameplayAbility);
    
    UFUNCTION(BlueprintPure)
    static ASN2PlayerCharacter* GetPlayerFromAbilityActorInfo(const UUWEGameplayAbility* GameplayAbility);
    
    UFUNCTION(BlueprintPure)
    static ASN2PlayerController* GetPlayerControllerFromAbilityActorInfo(const UUWEGameplayAbility* GameplayAbility);
    
    UFUNCTION(BlueprintPure)
    static UUWELoopingCuesComponent* GetLoopingCuesComponentFromAbilityActorInfo(const UUWEGameplayAbility* GameplayAbility);
    
    UFUNCTION(BlueprintPure)
    static UUWEInventoryRouterComponent* GetInventoryRouterFromAilityActorInfo(const UUWEGameplayAbility* GameplayAbility);
    
    UFUNCTION(BlueprintPure)
    static UUWEInventoryComponent* GetInventoryFromAbilityActorInfo(const UUWEGameplayAbility* GameplayAbility);
    
    UFUNCTION(BlueprintPure)
    static UUWEEquipmentComponent* GetEquipmentFromAbilityActorInfo(const UUWEGameplayAbility* GameplayAbility);
    
    UFUNCTION(BlueprintPure)
    static FGameplayTagContainer GetCosmeticTagsFromAbilityActorInfo(const UUWEGameplayAbility* GameplayAbility);
    
    UFUNCTION(BlueprintPure)
    static ASN2BaseCharacter* GetCharacterFromAbilityActorInfo(const UUWEGameplayAbility* GameplayAbility);
    
};

