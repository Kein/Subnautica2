#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "SN2DebugSettingsComponent.generated.h"

class UInputAction;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2DebugSettingsComponent : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UInputAction* DebugSettingsAction;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SelectedTab;
    
    USN2DebugSettingsComponent(const FObjectInitializer& ObjectInitializer);

};

