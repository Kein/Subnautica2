#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "SN2AttachmentDebugger.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2AttachmentDebugger : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    USN2AttachmentDebugger(const FObjectInitializer& ObjectInitializer);

};

