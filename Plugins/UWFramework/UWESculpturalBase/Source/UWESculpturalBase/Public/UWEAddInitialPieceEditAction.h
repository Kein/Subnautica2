#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EUWEEditActionLegality.h"
#include "UWEBaseEditAction.h"
#include "UWEAddInitialPieceEditAction.generated.h"

class AUWESculpturalBaseActor;
class UUWEAddInitialPieceEditAction;
class UUWEBaseInitialPieceData;

UCLASS(BlueprintType)
class UWESCULPTURALBASE_API UUWEAddInitialPieceEditAction : public UObject, public IUWEBaseEditAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TSoftObjectPtr<UUWEBaseInitialPieceData> InitialPieceData;
    
    UPROPERTY()
    FQuat Rotation;
    
public:
    UUWEAddInitialPieceEditAction();

    UFUNCTION(BlueprintCallable)
    EUWEEditActionLegality GetLegality(bool IgnoreSupportCheck, int32 LockGroupToIgnore, bool IgnoreAllLocks, int32 MaxIterations);
    
    UFUNCTION(BlueprintCallable)
    static UUWEAddInitialPieceEditAction* Create(AUWESculpturalBaseActor* base, UUWEBaseInitialPieceData* NewInitialPieceData, const FString& AnalyticsActionName);
    

    // Fix for true pure virtual functions not being implemented
};

