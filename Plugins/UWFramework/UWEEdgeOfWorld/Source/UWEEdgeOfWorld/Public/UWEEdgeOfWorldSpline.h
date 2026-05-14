#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "UWEEdgeOfWorldSpline.generated.h"

class APawn;
class UUWESplineComponent;

UCLASS()
class UWEEDGEOFWORLD_API AUWEEdgeOfWorldSpline : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerOverlapEnd, APawn*, Player);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerOverlapBegin, APawn*, Player);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnPlayerOverlapBegin OnPlayerOverlapBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnPlayerOverlapEnd OnPlayerOverlapEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUWESplineComponent* SplineComponent;
    
public:
    AUWEEdgeOfWorldSpline(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool IsPointInside(FVector LocationToCheck);
    
};

