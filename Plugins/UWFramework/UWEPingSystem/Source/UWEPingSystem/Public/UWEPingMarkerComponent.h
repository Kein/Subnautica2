#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/BoxComponent.h"
#include "Interactable.h"
#include "UWEActorLifeCycle.h"
#include "UWESaveObject.h"
#include "UWEBuilderItemRemovalHandlerInterface.h"
#include "UWEPing.h"
#include "UWEPingMarkerComponent.generated.h"

class UUWEPingData;
class UUWESaveHandle;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPINGSYSTEM_API UUWEPingMarkerComponent : public UBoxComponent, public IInteractable, public IUWEActorLifeCycle, public IUWEBuilderItemRemovalHandlerInterface, public IUWESaveObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPingChanged, FUWEPing, Ping);
    
protected:
    UPROPERTY(BlueprintAssignable)
    FOnPingChanged OnPingChanged;
    
    UPROPERTY(BlueprintReadOnly, Replicated, SaveGame)
    FGuid PingID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText OriginalName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableVisibilityToggling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UUWEPingData* PingData;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    UUWEPingMarkerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnProfanityFilterChanged(bool bProfanityFilterEnabled);
    
    UFUNCTION()
    void OnPingsChanged();
    
    UFUNCTION()
    void OnDynamicItemFullyRegistered();
    
    UFUNCTION(BlueprintPure)
    FText GetPingDisplayName();
    

    // Fix for true pure virtual functions not being implemented
};

