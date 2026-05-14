#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "UWEActorDataAsset.h"
#include "Templates/SubclassOf.h"
#include "UWEPingData.generated.h"

class AActor;
class UTexture2D;

UCLASS(EditInlineNew)
class UWEPINGSYSTEM_API UUWEPingData : public UUWEActorDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag IdentifierTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer HideWhenPlayerHasTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer OnlyShowWhenPlayerHasTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* Thumbnail;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag SoundCue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AActor> ActorPing;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool HideDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool OverridePingFadeDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PingFadeStartDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PingFadeEndDistance;
    
    UUWEPingData();

};

