#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2BuilderMenuViewModel.generated.h"

class UObject;
class USN2RecipesListViewModel;
class UUWECraftingRecipeCategory;

UCLASS()
class SUBNAUTICA2_API USN2BuilderMenuViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    UUWECraftingRecipeCategory* ActiveCategory;
    
public:
    USN2BuilderMenuViewModel();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    USN2RecipesListViewModel* GetRecipeList(UUWECraftingRecipeCategory* Category, UObject* WorldContext);
    
};

