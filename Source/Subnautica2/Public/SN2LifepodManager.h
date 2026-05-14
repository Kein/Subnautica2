#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SN2LifepodManager.generated.h"

UCLASS()
class SUBNAUTICA2_API ASN2LifepodManager : public AActor {
    GENERATED_BODY()
public:
    ASN2LifepodManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ShowHUD();
    
    UFUNCTION(BlueprintCallable)
    void HideHud();
    
};

