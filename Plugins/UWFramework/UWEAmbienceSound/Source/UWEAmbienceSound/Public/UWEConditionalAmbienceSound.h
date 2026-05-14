#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWEEffectParam.h"
#include "UWEConditionalAmbienceSound.generated.h"

class APawn;
class UFMODEvent;

UCLASS(Abstract, Blueprintable)
class UWEAMBIENCESOUND_API UUWEConditionalAmbienceSound : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UFMODEvent* Event;
    
    UPROPERTY(EditAnywhere)
    TArray<FUWEEffectParam> Params;
    
public:
    UUWEConditionalAmbienceSound();

    UFUNCTION(BlueprintNativeEvent)
    bool ShouldPlay(APawn* LocalPawn) const;
    
    UFUNCTION(BlueprintCallable)
    void SetParameter(FName Name, float Value);
    
    UFUNCTION(BlueprintPure)
    FString GetEventName() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnUpdate(APawn* LocalPawn, float DeltaTime);
    
};

