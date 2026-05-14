#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWEPhotoToursDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPHOTOTOURS_API UUWEPhotoToursDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWEPhotoToursDiagnostic(const FObjectInitializer& ObjectInitializer);

};

