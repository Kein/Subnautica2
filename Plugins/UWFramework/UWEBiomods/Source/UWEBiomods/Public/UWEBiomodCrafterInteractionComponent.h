#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEBiomodCrafterInteractionComponent.generated.h"

class UUWEBioAbilityData;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEBIOMODS_API UUWEBiomodCrafterInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UUWEBiomodCrafterInteractionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Reliable, Server)
    void ServerUninstallBiomod(UUWEBioAbilityData* AbilityData);
    
    UFUNCTION(Reliable, Server)
    void ServerInstallBiomod(UUWEBioAbilityData* AbilityData);
    
};

