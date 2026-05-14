#pragma once
#include "CoreMinimal.h"
#include "UWEGlintableScannable.h"
#include "SN2GlintableScannable.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2GlintableScannable : public UUWEGlintableScannable {
    GENERATED_BODY()
public:
    USN2GlintableScannable(const FObjectInitializer& ObjectInitializer);

};

