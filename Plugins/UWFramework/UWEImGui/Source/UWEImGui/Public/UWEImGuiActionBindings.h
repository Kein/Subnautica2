#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UWEImGuiActionBinding.h"
#include "UWEImGuiActionBindings.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class UWEIMGUI_API UUWEImGuiActionBindings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    TArray<FUWEImGuiActionBinding> ActionBindings;
    
    UUWEImGuiActionBindings();

};

