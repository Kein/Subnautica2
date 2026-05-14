#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UWEWorldPOI.generated.h"

UCLASS()
class UWEWORLDPOPULATION2_API AUWEWorldPOI : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool IsCave;
    
    UPROPERTY(EditAnywhere)
    FName POIName;
    
public:
    AUWEWorldPOI(const FObjectInitializer& ObjectInitializer);

};

