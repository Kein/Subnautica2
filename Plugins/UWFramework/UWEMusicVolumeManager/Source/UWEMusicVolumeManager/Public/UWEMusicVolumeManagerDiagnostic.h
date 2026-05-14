#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWEMusicVolumeManagerDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEMUSICVOLUMEMANAGER_API UUWEMusicVolumeManagerDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWEMusicVolumeManagerDiagnostic(const FObjectInitializer& ObjectInitializer);

};

