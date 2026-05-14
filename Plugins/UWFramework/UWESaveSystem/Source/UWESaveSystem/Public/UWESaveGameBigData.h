#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "UWESaveCallbacks.h"
#include "UWESaveGameBigData.generated.h"

UCLASS()
class UWESAVESYSTEM_API AUWESaveGameBigData : public AActor, public IUWESaveCallbacks {
    GENERATED_BODY()
public:
private:
    UPROPERTY(SaveGame)
    TArray<int32> BigData;
    
    UPROPERTY(SaveGame)
    FVector Location;
    
public:
    AUWESaveGameBigData(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void CreateBigData();
    

    // Fix for true pure virtual functions not being implemented
};

