#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "UWEPingMarker.generated.h"

class USceneComponent;
class UUWEPingData;
class UUWESaveComponent;

UCLASS()
class UWEPINGSYSTEM_API AUWEPingMarker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame)
    FText FriendlyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame)
    FText OriginalName;
    
    UPROPERTY(EditDefaultsOnly)
    bool AllowDuplicates;
    
    UPROPERTY(EditAnywhere, Replicated, SaveGame)
    TSoftObjectPtr<UUWEPingData> PingData;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWESaveComponent* SaveComponent;
    
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, SaveGame)
    FGuid UniqueID;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    USceneComponent* RootComp;
    
public:
    AUWEPingMarker(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    FGuid GetUniqueId();
    
};

