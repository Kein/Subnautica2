#pragma once
#include "CoreMinimal.h"
#include "CommonTabListWidgetBase.h"
#include "SN2TabDescriptor.h"
#include "SN2TabListWidgetBase.generated.h"

class UCommonUserWidget;

UCLASS(Abstract, EditInlineNew)
class SUBNAUTICA2_API USN2TabListWidgetBase : public UCommonTabListWidgetBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTabContentCreated, FName, TabId, UCommonUserWidget*, TabWidget);
    
    UPROPERTY(BlueprintAssignable)
    FOnTabContentCreated OnTabContentCreated;
    
private:
    UPROPERTY(EditAnywhere)
    TArray<FSN2TabDescriptor> PreregisteredTabInfoArray;
    
    UPROPERTY()
    TMap<FName, FSN2TabDescriptor> PendingTabLabelInfoMap;
    
public:
    USN2TabListWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetTabHiddenState(FName TabNameID, bool bHidden);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterDynamicTab(const FSN2TabDescriptor& TabDescriptor);
    
    UFUNCTION(BlueprintPure)
    bool IsTabVisible(FName TabId);
    
    UFUNCTION(BlueprintPure)
    bool IsLastTabActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFirstTabActive() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetVisibleTabCount();
    
    UFUNCTION(BlueprintPure)
    bool GetPreregisteredTabInfo(const FName TabNameID, FSN2TabDescriptor& OutTabInfo);
    
};

