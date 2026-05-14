#pragma once
#include "CoreMinimal.h"
#include "UWEWorldPOI.h"
#include "UWESphereWorldPOI.generated.h"

class USphereComponent;

UCLASS()
class UWEWORLDPOPULATION2_API AUWESphereWorldPOI : public AUWEWorldPOI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleAnywhere)
    USphereComponent* SphereComponent;
    
public:
    AUWESphereWorldPOI(const FObjectInitializer& ObjectInitializer);

};

