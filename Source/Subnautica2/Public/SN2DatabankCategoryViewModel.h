#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2DatabankCategoryViewModel.generated.h"

class USN2DatabankCategoryViewModel;
class USN2DatabankEntryViewModel;
class USN2UnreadBadgeViewModel;

UCLASS()
class SUBNAUTICA2_API USN2DatabankCategoryViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FText CategoryTitle;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<USN2DatabankCategoryViewModel*> SubCategories;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<USN2DatabankEntryViewModel*> Entries;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsExpanded;
    
    UPROPERTY(BlueprintReadOnly)
    int32 IndentLevel;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsVisible;
    
    UPROPERTY(BlueprintReadOnly)
    USN2UnreadBadgeViewModel* UnreadBadge;
    
public:
    USN2DatabankCategoryViewModel();

    UFUNCTION(BlueprintCallable)
    void SetIsExpanded(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    int32 RefreshNumUnread();
    
};

