#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "UWEActorDataReceiverComponent.generated.h"

class AUWEActorDataGroup;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEGLOBALACTORDATA_API UUWEActorDataReceiverComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGameplayTag ActorDataGroupIdentifier;
    
public:
    UUWEActorDataReceiverComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDataChanged(FGameplayTag ActorDataGroupId);
    
private:
    UFUNCTION()
    void OnChange(const AUWEActorDataGroup* Group, FGameplayTag FieldType);
    
    UFUNCTION()
    void CheckSubsystemReadyTimer();
    
};

