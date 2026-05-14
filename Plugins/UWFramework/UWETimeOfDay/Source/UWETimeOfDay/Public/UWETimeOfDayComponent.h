#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWESaveObject.h"
#include "EDayPhase.h"
#include "HourMinute.h"
#include "TimeOfDayManuallyUpdatedDelegate.h"
#include "UWETimeOfDayComponent.generated.h"

class UUWESaveHandle;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UWETIMEOFDAY_API UUWETimeOfDayComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNewDayDelegate, int32, NewDayNumber);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDayPhaseChangedDelegate, EDayPhase, PreviousDayPhase, EDayPhase, NewDayPhase);
    
    UPROPERTY(BlueprintAssignable)
    FDayPhaseChangedDelegate OnDayPhaseChanged;
    
    UPROPERTY(BlueprintAssignable)
    FNewDayDelegate OnNewDay;
    
    UPROPERTY(BlueprintAssignable)
    FTimeOfDayManuallyUpdated TimeOfDayManuallyUpdated;
    
    UPROPERTY(BlueprintReadWrite, Replicated, SaveGame)
    double InitialNumGameDays;
    
    UPROPERTY(BlueprintReadWrite, Replicated)
    double WorldTimeAtInitialValue;
    
    UPROPERTY(BlueprintReadWrite, Replicated, SaveGame)
    double WorldTimeAtTimeFrozen;
    
protected:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    int32 DayLengthMinutes;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    int32 HourStartDawn;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    int32 HourStartDay;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    int32 HourStartDusk;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    int32 HourStartNight;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float InitialHour;
    
private:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    UUWETimeOfDayComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetTimeOfDay(float NewTime);
    
    UFUNCTION(BlueprintCallable)
    void SetDayNumber(int32 NewDayNumber);
    
    UFUNCTION(BlueprintCallable)
    void SetDayLengthInMinutes(float NewLength);
    
    UFUNCTION(BlueprintCallable)
    void ResetTimeOfDayToDefault();
    
private:
    UFUNCTION()
    void OnRep_TimeOfDayUpdatedManually();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsNight();
    
    UFUNCTION(BlueprintPure)
    bool IsDaylight();
    
    UFUNCTION(BlueprintCallable)
    bool IsDay();
    
    UFUNCTION(BlueprintCallable)
    float GetTimeOfDayFraction();
    
    UFUNCTION(BlueprintCallable)
    FHourMinute GetTimeOfDay();
    
    UFUNCTION(BlueprintCallable)
    double GetNumGameDays();
    
    UFUNCTION(BlueprintPure)
    float GetNormalizedDaylight();
    
    UFUNCTION(BlueprintPure)
    EDayPhase GetDayPhase();
    
    UFUNCTION(BlueprintPure)
    int32 GetDayNumber();
    
    UFUNCTION(BlueprintCallable)
    void FreezeTime(bool ShouldFreeze);
    

    // Fix for true pure virtual functions not being implemented
};

