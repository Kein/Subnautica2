#pragma once
#include "CoreMinimal.h"
#include "UWEGameplayAbility.h"
#include "SerializedEditAction.h"
#include "SN2BaseDeconstructAbility.generated.h"

class IUWEBaseEditAction;
class UUWEBaseEditAction;

UCLASS()
class SUBNAUTICA2_API USN2BaseDeconstructAbility : public UUWEGameplayAbility {
    GENERATED_BODY()
public:
    USN2BaseDeconstructAbility();

protected:
    UFUNCTION(Reliable, Server)
    void ServerBaseEditAction(const FSerializedEditAction& SerializedEditAction);
    
    UFUNCTION(BlueprintCallable)
    void ApplyEditAction(TScriptInterface<IUWEBaseEditAction> EditAction);
    
};

