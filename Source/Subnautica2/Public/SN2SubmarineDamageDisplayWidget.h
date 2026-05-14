#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "SN2SubmarineDamageDisplayWidget.generated.h"

class UPanelWidget;
class USN2SubmarineDamageWidget;

UCLASS(EditInlineNew)
class SUBNAUTICA2_API USN2SubmarineDamageDisplayWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer PersistentSubsystemTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USN2SubmarineDamageWidget> DamageWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UPanelWidget* Panel;
    
public:
    USN2SubmarineDamageDisplayWidget();

private:
    UFUNCTION()
    void OnDamageChanged();
    
};

