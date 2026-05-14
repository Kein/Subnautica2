#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWEScreenshotDiagnostic.generated.h"

class UTexture2D;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESAVESYSTEM_API UUWEScreenshotDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UTexture2D* ThumbnailTexture;
    
public:
    UUWEScreenshotDiagnostic(const FObjectInitializer& ObjectInitializer);

};

