#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "UWEBioBedAssignment.h"
#include "UWEBioBedEntry.h"
#include "UWEBioBedManager.generated.h"

class AUWEBioBedBase;
class AUWEBioBedManager;
class UObject;
class UUWESaveHandle;

UCLASS()
class UWEBIOBED_API AUWEBioBedManager : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame, VisibleAnywhere, ReplicatedUsing=OnRep_BioBedAssignments)
    TArray<FUWEBioBedAssignment> BioBedAssignments;
    
    UPROPERTY(Replicated, SaveGame, VisibleAnywhere)
    TArray<FUWEBioBedEntry> BioBedEntries;
    
private:
    UPROPERTY()
    TArray<TWeakObjectPtr<AUWEBioBedBase>> BioBedActors;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    AUWEBioBedManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void RegisterBioBed(AUWEBioBedBase* biobed);
    
private:
    UFUNCTION()
    void OnRep_BioBedAssignments(const TArray<FUWEBioBedAssignment>& OldAssignments) const;
    
public:
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AUWEBioBedManager* GetBioBedManager(const UObject* WorldContextObject);
    
};

