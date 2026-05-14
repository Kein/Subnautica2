#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "UWEPlayerCustomizationTargetInterface.h"
#include "SN2PlayerCinematicCharacter.generated.h"

UCLASS()
class SUBNAUTICA2_API ASN2PlayerCinematicCharacter : public ASkeletalMeshActor, public IUWEPlayerCustomizationTargetInterface {
    GENERATED_BODY()
public:
    ASN2PlayerCinematicCharacter(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

