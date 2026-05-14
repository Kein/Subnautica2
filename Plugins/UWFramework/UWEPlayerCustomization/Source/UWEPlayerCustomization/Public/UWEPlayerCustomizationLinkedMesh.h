#pragma once
#include "CoreMinimal.h"
#include "EUWEPlayerCustomizationPartType.h"
#include "UWEPlayerCustomizationLinkedMesh.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct UWEPLAYERCUSTOMIZATION_API FUWEPlayerCustomizationLinkedMesh {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EUWEPlayerCustomizationPartType PartType;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> MeshAsset;
    
    FUWEPlayerCustomizationLinkedMesh();
};

