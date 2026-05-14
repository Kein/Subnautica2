#pragma once
#include "CoreMinimal.h"
#include "GameSettingPressAnyKey.h"
#include "KeyAlreadyBoundWarning.generated.h"

class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class GAMESETTINGS_API UKeyAlreadyBoundWarning : public UGameSettingPressAnyKey {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* WarningText;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* CancelText;
    
public:
    UKeyAlreadyBoundWarning();

};

