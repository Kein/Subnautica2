#pragma once
#include "CoreMinimal.h"
#include "FMODAudioComponent.h"
#include "SN2ActiveBaseModuleSound.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2ActiveBaseModuleSound : public UFMODAudioComponent {
    GENERATED_BODY()
public:
    USN2ActiveBaseModuleSound(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnPoweredStateChanged(bool bNewIsPowered);
    
    UFUNCTION()
    void OnAliveChanged(AActor* SourceActor, AActor* TargetActor);
    
};

