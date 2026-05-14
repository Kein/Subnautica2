#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "MVVMViewModelBase.h"
#include "DialogueLine.h"
#include "SN2DialogueEntryLineViewModel.generated.h"

class UAudioComponent;
class UObject;

UCLASS()
class SUBNAUTICA2_API USN2DialogueEntryLineViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlaySoundFinished);
    
    UPROPERTY(BlueprintReadOnly)
    FDialogueLine Line;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsPlaying;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlaySoundFinished OnPlaySoundFinished;
    
protected:
    UPROPERTY(Instanced)
    UAudioComponent* CurrentSound;
    
    UPROPERTY()
    FTimerHandle SoundTimerHandle;
    
public:
    USN2DialogueEntryLineViewModel();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void StopSound(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void PlaySound(UObject* WorldContextObject);
    
protected:
    UFUNCTION()
    void OnPlaySoundCompleted();
    
};

