#pragma once
#include "CoreMinimal.h"
#include "UWEWorldPOI.h"
#include "UWEBoxWorldPOI.generated.h"

class UBoxComponent;

UCLASS()
class UWEWORLDPOPULATION2_API AUWEBoxWorldPOI : public AUWEWorldPOI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleAnywhere)
    UBoxComponent* BoxComponent;
    
public:
    AUWEBoxWorldPOI(const FObjectInitializer& ObjectInitializer);

};

