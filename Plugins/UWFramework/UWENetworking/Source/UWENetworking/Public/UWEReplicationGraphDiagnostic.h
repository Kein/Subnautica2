#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWEReplicationGraphDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWENETWORKING_API UUWEReplicationGraphDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWEReplicationGraphDiagnostic(const FObjectInitializer& ObjectInitializer);

};

