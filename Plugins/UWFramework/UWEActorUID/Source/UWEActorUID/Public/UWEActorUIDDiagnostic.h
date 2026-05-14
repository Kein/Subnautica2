#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWEActorUIDDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEACTORUID_API UUWEActorUIDDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWEActorUIDDiagnostic(const FObjectInitializer& ObjectInitializer);

};

