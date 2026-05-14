#pragma once
#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "UWECameraFeedSourceComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWECAMERAFEED_API UUWECameraFeedSourceComponent : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    FText CameraName;
    
public:
    UUWECameraFeedSourceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FText GetCameraName();
    
};

