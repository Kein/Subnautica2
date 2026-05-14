#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "UWEVideoTourComponent.generated.h"

class AUWESplineMover;
class AUWEVideoTourPath;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEAUTOMATIONTESTING_API UUWEVideoTourComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    AUWESplineMover* SplineMoverActor;
    
    UPROPERTY(BlueprintReadOnly)
    AUWEVideoTourPath* VideoTourPathActor;
    
    UPROPERTY(BlueprintReadOnly)
    FVector OldPlayerLocation;
    
public:
    UUWEVideoTourComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StopVideoTourPath();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StartVideoTourPath();
    
    UFUNCTION()
    void NotifyStopPerformanceCapture();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void CreateVideoTourPath(const FString& InVideoTourPath);
    
};

