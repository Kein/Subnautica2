#pragma once
#include "CoreMinimal.h"
#include "UWEWorldZone.h"
#include "UWEBoxWorldZone.generated.h"

class UBoxComponent;

UCLASS()
class UWEWORLDPOPULATION2_API AUWEBoxWorldZone : public AUWEWorldZone {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleAnywhere)
    UBoxComponent* BoxComponent;
    
public:
    AUWEBoxWorldZone(const FObjectInitializer& ObjectInitializer);

};

