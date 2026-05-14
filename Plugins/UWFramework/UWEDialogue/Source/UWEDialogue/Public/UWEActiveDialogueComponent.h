#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DialogueInfo.h"
#include "UWEActiveDialogueComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEDIALOGUE_API UUWEActiveDialogueComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FDialogueInfo DialogueInfo;
    
public:
    UUWEActiveDialogueComponent(const FObjectInitializer& ObjectInitializer);

};

