#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2DatabankEntryViewModel.generated.h"

class USN2UnreadBadgeViewModel;
class UTexture2D;
class UUWEDatabankEntry;

UCLASS()
class SUBNAUTICA2_API USN2DatabankEntryViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    UUWEDatabankEntry* Entry;
    
    UPROPERTY(BlueprintReadOnly)
    int32 IndentLevel;
    
    UPROPERTY(BlueprintReadOnly)
    USN2UnreadBadgeViewModel* UnreadBadge;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsSelected;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsVisible;
    
public:
    USN2DatabankEntryViewModel();

    UFUNCTION(BlueprintCallable)
    void SetIsSelected(bool NewValue);
    
    UFUNCTION(BlueprintPure)
    FText GetEntryTitle() const;
    
    UFUNCTION(BlueprintPure)
    FText GetEntryText() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetEntryImage() const;
    
};

