#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWERangeTrackerDebugger.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWERANGETRACKER_API UUWERangeTrackerDebugger : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
    UUWERangeTrackerDebugger(const FObjectInitializer& ObjectInitializer);

};

