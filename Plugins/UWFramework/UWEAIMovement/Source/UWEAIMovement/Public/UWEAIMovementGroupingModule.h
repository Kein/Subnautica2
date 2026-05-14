#pragma once
#include "CoreMinimal.h"
#include "UWEAIMovementAuxiliaryModule.h"
#include "UWEAIMovementGroupingModule.generated.h"

class AActor;
class UPrimitiveComponent;
class UUWEAIMovementGroupingModuleSettings;

UCLASS(DefaultToInstanced, EditInlineNew)
class UWEAIMOVEMENT_API UUWEAIMovementGroupingModule : public UUWEAIMovementAuxiliaryModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UPrimitiveComponent* RootComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    UUWEAIMovementGroupingModuleSettings* Settings;
    
    UPROPERTY()
    TArray<AActor*> Neighbours;
    
    UPROPERTY()
    AActor* Leader;
    
public:
    UUWEAIMovementGroupingModule();

};

