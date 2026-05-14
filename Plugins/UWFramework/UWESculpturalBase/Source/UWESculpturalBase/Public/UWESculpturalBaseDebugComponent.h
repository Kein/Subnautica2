#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWESculpturalBaseDebugComponent.generated.h"

class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESCULPTURALBASE_API UUWESculpturalBaseDebugComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UUWESculpturalBaseDebugComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSkipSupportCheck(const UObject* WorldContextObject);
    
};

