#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UWEBuilderItemsSpawnManagerSettings.generated.h"

class AActor;
class UActorComponent;

UCLASS(DefaultConfig, Config=UWESpawnSystems)
class UWESPAWNSYSTEMS_API UUWEBuilderItemsSpawnManagerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<TSoftClassPtr<UActorComponent>> ExpectedComponents;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<TSoftClassPtr<AActor>> BuilderItemsThatCannotBeStreamed;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<TSoftClassPtr<UActorComponent>> ComponentsThatShouldNotBeStreamed;
    
    UUWEBuilderItemsSpawnManagerSettings();

};

