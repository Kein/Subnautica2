#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Components/PanelWidget.h"
#include "UWESimpleGrid.generated.h"

class UWidget;

UCLASS()
class UWECOMMONUI_API UUWESimpleGrid : public UPanelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumColumns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumRows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin SlotPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlotMinHeight;
    
    UPROPERTY(Instanced)
    TMap<EUINavigation, UWidget*> NavigationToExplicitWidget;
    
public:
    UUWESimpleGrid();

    UFUNCTION(BlueprintCallable)
    void SetSlotPadding(const FMargin& InSlotPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetSlotMinHeight(float InSlotMinHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetNumRows(int32 InNumRows);
    
    UFUNCTION(BlueprintCallable)
    void SetNumColumns(int32 InNumColumns);
    
    UFUNCTION(BlueprintCallable)
    void SetExplicitNavigationOverride(EUINavigation Direction, UWidget* Widget);
    
    UFUNCTION(BlueprintPure)
    FMargin GetSlotPadding() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumRows() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumColumns() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearExplicitNavigationOverride(EUINavigation Direction);
    
};

