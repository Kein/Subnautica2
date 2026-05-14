#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWEEventKey.h"
#include "UWEEventTrackerDiagnostic.generated.h"

class UUWEEventTrackerComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEEVENTTRACKER_API UUWEEventTrackerDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWEEventTrackerDiagnostic(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnEventTrackerSave(UUWEEventTrackerComponent* Tracker, float duration);
    
    UFUNCTION()
    void OnEventTrackerNotify(UUWEEventTrackerComponent* Tracker, FUWEEventKey Key, int32 Value, bool IsNewKey);
    
};

