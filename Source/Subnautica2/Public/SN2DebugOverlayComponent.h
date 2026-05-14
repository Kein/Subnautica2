#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "TabsTypes.h"
#include "SN2DebugOverlayComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2DebugOverlayComponent : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TabsTypes SelectedTab;
    
private:
    UPROPERTY()
    AActor* TargetActor;
    
public:
    USN2DebugOverlayComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void CycleTargets(int32 Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void CycleTab();
    
};

