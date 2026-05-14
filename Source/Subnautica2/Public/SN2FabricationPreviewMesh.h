#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "SN2FabricationPreviewMesh.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2FabricationPreviewMesh : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    USN2FabricationPreviewMesh(const FObjectInitializer& ObjectInitializer);

};

