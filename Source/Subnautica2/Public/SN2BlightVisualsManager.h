#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnLevelAddedDynamicDelegate.h"
#include "SN2BlightVisualsManager.generated.h"

UCLASS()
class SUBNAUTICA2_API ASN2BlightVisualsManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnLevelAddedDynamic OnLevelAddedBlueprint;
    
    ASN2BlightVisualsManager(const FObjectInitializer& ObjectInitializer);

};

