#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MVVMViewModelBase.h"
#include "SN2PlayerInfoViewModel.generated.h"

class ASN2PlayerState;

UCLASS()
class SUBNAUTICA2_API USN2PlayerInfoViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TWeakObjectPtr<ASN2PlayerState> PlayerState;
    
    UPROPERTY(BlueprintReadOnly)
    FString PlayerName;
    
    UPROPERTY(BlueprintReadOnly)
    float Ping;
    
    UPROPERTY(BlueprintReadOnly)
    FString Cheats;
    
    UPROPERTY(BlueprintReadOnly)
    bool bUnStuckAllowed;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShouldShowCheats;
    
public:
    USN2PlayerInfoViewModel();

    UFUNCTION(BlueprintCallable)
    void Shutdown();
    
private:
    UFUNCTION()
    void OnCheatTagChanged(FGameplayTag GameplayTag, int32 I);
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize(ASN2PlayerState* InPlayerState);
    
protected:
    UFUNCTION()
    void HandlePlayerNameChanged(const FString& NewName);
    
};

