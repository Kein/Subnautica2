#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "UWESaveObject.h"
#include "UWESculpturalBaseCellCost.h"
#include "SN2DeconstructableComponent.generated.h"

class AActor;
class ASN2BuilderTool;
class USN2DeconstructableComponent;
class UUWESaveHandle;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2DeconstructableComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeconstruct);
    
    UPROPERTY(BlueprintAssignable)
    FOnDeconstruct OnDeconstruct;
    
protected:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY(SaveGame)
    TArray<FUWESculpturalBaseCellCost> SavedRefundValue;
    
public:
    USN2DeconstructableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    static USN2DeconstructableComponent* TryFindDeconstructableComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void Deconstruct(ASN2BuilderTool* BuilderTool, FGuid TargetGUID);
    

    // Fix for true pure virtual functions not being implemented
};

