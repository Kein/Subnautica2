#pragma once
#include "CoreMinimal.h"
#include "UWEGameplayAbility.h"
#include "SN2BuilderActionAbility.generated.h"

class ASN2BuilderTool;

UCLASS()
class SUBNAUTICA2_API USN2BuilderActionAbility : public UUWEGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<ASN2BuilderTool> builder;
    
public:
    USN2BuilderActionAbility();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetModeTexture();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ResetModeTexture();
    
    UFUNCTION()
    void EndBuilderAction();
    
};

