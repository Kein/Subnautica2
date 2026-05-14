#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "UWERespawnData.h"
#include "SN2RespawnComponent.generated.h"

class UUWEItemType;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2RespawnComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FUWERespawnData RespawnData;
    
    USN2RespawnComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void Respawn(TArray<UUWEItemType*> LostItems, FGameplayTag RespawnReason);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ConfirmRespawn();
    
    UFUNCTION(Client, Reliable)
    void Client_Respawning(const FUWERespawnData& Data);
    
};

