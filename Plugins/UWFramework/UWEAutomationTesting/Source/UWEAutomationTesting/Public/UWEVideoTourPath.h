#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEAutoMovePath.h"
#include "UWEVideoTour.h"
#include "UWEVideoTourPath.generated.h"

UCLASS()
class UWEAUTOMATIONTESTING_API AUWEVideoTourPath : public AUWEAutoMovePath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector> CamAngles;
    
    AUWEVideoTourPath(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetData(const FUWEVideoTour& VideoTour);
    
    UFUNCTION(BlueprintPure)
    float GetSamplingRateHz() const;
    
};

