#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UWEAutoMovePath.generated.h"

class USplineComponent;

UCLASS()
class UWEAUTOMATIONTESTING_API AUWEAutoMovePath : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USplineComponent* Path;
    
    AUWEAutoMovePath(const FObjectInitializer& ObjectInitializer);

};

