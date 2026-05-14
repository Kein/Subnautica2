#pragma once
#include "CoreMinimal.h"
#include "UWEClientWorldSubsystem.h"
#include "UWECharacterTrackerSubsystem.generated.h"

class AActor;

UCLASS()
class UWECHARACTERTRACKER_API UUWECharacterTrackerSubsystem : public UUWEClientWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<AActor*> RegisteredActors;
    
public:
    UUWECharacterTrackerSubsystem();

};

