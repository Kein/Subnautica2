#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MVVMViewModelBase.h"
#include "UWEEdgeOfWorldHUDViewModel.generated.h"

class UObject;

UCLASS()
class UWEEDGEOFWORLD_API UUWEEdgeOfWorldHUDViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool ShouldShowHUD;
    
private:
    UPROPERTY()
    UObject* WorldContextObject;
    
public:
    UUWEEdgeOfWorldHUDViewModel();

private:
    UFUNCTION()
    void OOBTagResponseEvent(FGameplayTag GameplayTag, int32 I);
    
};

