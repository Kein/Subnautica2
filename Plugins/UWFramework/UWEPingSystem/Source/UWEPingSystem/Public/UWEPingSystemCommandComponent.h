#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "UWEPingSystemCommandComponent.generated.h"

class AActor;
class UUWEPingData;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPINGSYSTEM_API UUWEPingSystemCommandComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Replicated)
    FGuid PingUniqueId;
    
    UUWEPingSystemCommandComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetThumbnailColor(const FGuid UniqueID, const FLinearColor& NewThumbnailColor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetPingDisplayName(const FGuid UniqueID, const FText& NewDisplayName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRemovePing(const FGuid UniqueID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAddPlayerPing(const FVector& Location, const FText& DisplayName, float Lifetime, UUWEPingData* PingData, AActor* TrackingActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAddPing(const FVector& Location, const FText& DisplayName, float Lifetime, UUWEPingData* PingData);
    
};

