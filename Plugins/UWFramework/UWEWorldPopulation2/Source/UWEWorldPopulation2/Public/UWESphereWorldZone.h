#pragma once
#include "CoreMinimal.h"
#include "UWEWorldZone.h"
#include "UWESphereWorldZone.generated.h"

class USphereComponent;

UCLASS()
class UWEWORLDPOPULATION2_API AUWESphereWorldZone : public AUWEWorldZone {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleAnywhere)
    USphereComponent* SphereComponent;
    
public:
    AUWESphereWorldZone(const FObjectInitializer& ObjectInitializer);

};

