#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWEAllowedPieces.h"
#include "UWEDecoratorMeshList.h"
#include "UWEBaseDecorator.generated.h"

class AActor;

UCLASS()
class UWESCULPTURALBASE_API UUWEBaseDecorator : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FIntVector, FUWEAllowedPieces> Pieces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIntVector SeedCell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AffectsLegality;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Offset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FQuat RelativeRotation;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> DecoratorActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEDecoratorMeshList Meshes;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FGameplayTag DecoratorLayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Priority;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    bool Enabled;
    
public:
    UUWEBaseDecorator();

};

