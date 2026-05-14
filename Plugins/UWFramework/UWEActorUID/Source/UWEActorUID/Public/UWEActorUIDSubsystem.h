#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWEActorUID.h"
#include "UWEActorUIDSubsystem.generated.h"

class AActor;

UCLASS()
class UWEACTORUID_API UUWEActorUIDSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<AActor*, FUWEActorUID> ActorUIDMapping;
    
    UPROPERTY()
    TMap<FUWEActorUID, AActor*> UIDActorMapping;
    
public:
    UUWEActorUIDSubsystem();

};

