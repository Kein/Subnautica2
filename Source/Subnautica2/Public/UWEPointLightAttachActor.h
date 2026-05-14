#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UWEPointLightAttachActor.generated.h"

class UPointLightComponent;

UCLASS()
class SUBNAUTICA2_API AUWEPointLightAttachActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPointLightComponent* PointLight;
    
public:
    AUWEPointLightAttachActor(const FObjectInitializer& ObjectInitializer);

};

