#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SN2CheatStation.generated.h"

class APlayerState;
class IUWEUnlockableAsset;
class UUWEUnlockableAsset;

UCLASS()
class SUBNAUTICA2_API ASN2CheatStation : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<TScriptInterface<IUWEUnlockableAsset>> UnlockableAssets;
    
public:
    ASN2CheatStation(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UnlockUnlockablesForPlayer(APlayerState* PlayerState);
    
};

