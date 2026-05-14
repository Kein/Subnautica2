#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWEAmbienceSoundDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEAMBIENCESOUND_API UUWEAmbienceSoundDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWEAmbienceSoundDiagnostic(const FObjectInitializer& ObjectInitializer);

};

