#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2PinnedRecipesViewModel.generated.h"

class USN2RecipeViewModel;
class UUWEPinnedRecipesPlayerStateComponent;
class UUWEPrimaryDataAssetBase;

UCLASS()
class SUBNAUTICA2_API USN2PinnedRecipesViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<USN2RecipeViewModel*> Entries;
    
    UPROPERTY(BlueprintReadOnly)
    int32 MaxNumEntries;
    
    UPROPERTY(Instanced)
    UUWEPinnedRecipesPlayerStateComponent* PinnedRecipesComponent;
    
public:
    USN2PinnedRecipesViewModel();

protected:
    UFUNCTION()
    void OnRecipeUnpinned(UUWEPrimaryDataAssetBase* Recipe);
    
    UFUNCTION()
    void OnRecipePinned(UUWEPrimaryDataAssetBase* Recipe);
    
    UFUNCTION()
    void OnLocalClientReady();
    
};

