#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "UWEActorDataWorldSubsystem.generated.h"

class AUWEActorDataGroup;

UCLASS()
class UWEGLOBALACTORDATA_API UUWEActorDataWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActorDataChange, const AUWEActorDataGroup*, ADG, FGameplayTag, FieldType);
    
    UUWEActorDataWorldSubsystem();

};

