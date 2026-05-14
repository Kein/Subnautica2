#pragma once
#include "CoreMinimal.h"
#include "OnStimulusIntensityChangeSignatureDelegate.h"
#include "UWEStimulusComponent.h"
#include "UWEStimulusReceiverData.h"
#include "UWEStimulusReceiverComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESTIMULUS_API UUWEStimulusReceiverComponent : public UUWEStimulusComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnStimulusIntensityChangeSignature OnStimulusIntensityChangeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnStimulusIntensityChangeSignature OnStimulusReceived;
    
private:
    UPROPERTY(EditAnywhere)
    FUWEStimulusReceiverData Data;
    
public:
    UUWEStimulusReceiverComponent(const FObjectInitializer& ObjectInitializer);

};

