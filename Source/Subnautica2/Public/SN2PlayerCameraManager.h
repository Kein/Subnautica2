#pragma once
#include "CoreMinimal.h"
#include "UWEPlayerCameraManager.h"
#include "SN2PlayerCameraManager.generated.h"

UCLASS(NonTransient)
class SUBNAUTICA2_API ASN2PlayerCameraManager : public AUWEPlayerCameraManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterpolateSettingsSpeed;
    
public:
    ASN2PlayerCameraManager(const FObjectInitializer& ObjectInitializer);

};

