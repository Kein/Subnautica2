#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "SN2MockReviveTarget.generated.h"

class USN2ReviveableComponent;
class UUWEAbilitySystemComponent;
class UUWEHealthSetComponent;

UCLASS()
class SUBNAUTICA2_API ASN2MockReviveTarget : public AStaticMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USN2ReviveableComponent* ReviveableComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEHealthSetComponent* HealthSetComponent;
    
    ASN2MockReviveTarget(const FObjectInitializer& ObjectInitializer);

};

