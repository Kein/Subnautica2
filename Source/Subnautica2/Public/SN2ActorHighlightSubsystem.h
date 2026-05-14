#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SN2ActorHighlightSubsystem.generated.h"

class UPrimitiveComponent;

UCLASS()
class SUBNAUTICA2_API USN2ActorHighlightSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UPrimitiveComponent*> HighlightedComponents;
    
public:
    USN2ActorHighlightSubsystem();

};

