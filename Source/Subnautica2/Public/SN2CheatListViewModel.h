#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "CheatListItem.h"
#include "SN2CheatListViewModel.generated.h"

class UObject;

UCLASS()
class SUBNAUTICA2_API USN2CheatListViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<FCheatListItem> Items;
    
    UPROPERTY(BlueprintReadWrite)
    FString Title;
    
    UPROPERTY(BlueprintReadWrite)
    FString ConsoleCommand;
    
    UPROPERTY(BlueprintReadWrite)
    FString Description;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    FString SelectedItem;
    
public:
    USN2CheatListViewModel();

    UFUNCTION(BlueprintCallable)
    void SelectItem(const FString& ItemName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    void Initialize(UObject* InWorldContext);
    
};

