#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EUWEWindowManagerLayer.h"
#include "Templates/SubclassOf.h"
#include "WindowManager.generated.h"

class UCommonActivatableWidget;
class UCommonUserWidget;
class UInputAction;
class UModalActivatableWidget;
class UObject;
class UUWEWidgetLayer;
class UUserWidget;
class UWidget;

UCLASS(BlueprintType)
class UWECOMMONUI_API UWindowManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnWidgetPushed, TEnumAsByte<EUWEWindowManagerLayer>, LayerId, bool, IsFirst, TSubclassOf<UCommonActivatableWidget>, WidgetClass);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnWidgetPopped, TEnumAsByte<EUWEWindowManagerLayer>, LayerId, bool, IsLast, TSubclassOf<UCommonActivatableWidget>, WidgetClass);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnhancedInputAction, UInputAction*, InputAction);
    
    UPROPERTY(BlueprintAssignable)
    FOnWidgetPushed OnWidgetPushed;
    
    UPROPERTY(BlueprintAssignable)
    FOnWidgetPopped OnWidgetPopped;
    
    UPROPERTY(BlueprintAssignable)
    FOnEnhancedInputAction OnEnhancedInputAction;
    
protected:
    UPROPERTY(Instanced)
    TMap<TEnumAsByte<EUWEWindowManagerLayer>, UUWEWidgetLayer*> Layers;
    
    UPROPERTY(Instanced)
    UUserWidget* MainScreen;
    
public:
    UWindowManager();

    UFUNCTION(BlueprintCallable)
    void Show();
    
    UFUNCTION(BlueprintCallable)
    UCommonActivatableWidget* SetWidgetOnLayer(TEnumAsByte<EUWEWindowManagerLayer> LayerId, TSubclassOf<UCommonActivatableWidget> ActivatableWidgetClass);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWidgetFromLayer(TEnumAsByte<EUWEWindowManagerLayer> LayerId, UCommonActivatableWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void RemoveChildFromLayer(TEnumAsByte<EUWEWindowManagerLayer> LayerId, FName Name);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLayer(TEnumAsByte<EUWEWindowManagerLayer> LayerId, UUWEWidgetLayer* InLayer);
    
    UFUNCTION(BlueprintCallable)
    UModalActivatableWidget* PushToLayerWithContext(TEnumAsByte<EUWEWindowManagerLayer> LayerId, TSubclassOf<UModalActivatableWidget> ActivatableWidgetClass, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    UCommonActivatableWidget* PushToLayer(TEnumAsByte<EUWEWindowManagerLayer> LayerId, TSubclassOf<UCommonActivatableWidget> ActivatableWidgetClass);
    
    UFUNCTION(BlueprintCallable)
    void PopFromLayer(TEnumAsByte<EUWEWindowManagerLayer> LayerId);
    
    UFUNCTION(BlueprintCallable)
    void Pop(UCommonActivatableWidget* Widget);
    
protected:
    UFUNCTION()
    void OnWidgetRemoved(UWidget* Widget);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsHidden() const;
    
    UFUNCTION(BlueprintCallable)
    void Init(TSubclassOf<UUserWidget> InMainScreenClass);
    
    UFUNCTION(BlueprintCallable)
    void Hide();
    
    UFUNCTION(BlueprintPure)
    bool HasWidgetOnLayer(TEnumAsByte<EUWEWindowManagerLayer> LayerId);
    
protected:
    UFUNCTION()
    void HandleAppActivationChanged(bool bIsActive);
    
public:
    UFUNCTION(BlueprintCallable)
    UCommonActivatableWidget* GetActiveWidget(TEnumAsByte<EUWEWindowManagerLayer> LayerId);
    
    UFUNCTION(BlueprintCallable)
    void EmptyLayer(TEnumAsByte<EUWEWindowManagerLayer> LayerId);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastEnhancedInputAction(UInputAction* InputAction);
    
    UFUNCTION(BlueprintCallable)
    UCommonUserWidget* AddChildToLayer(TEnumAsByte<EUWEWindowManagerLayer> LayerId, TSubclassOf<UCommonUserWidget> WidgetClass, FName Name);
    
};

