#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "UWESaveObject.h"
#include "UWEGameplayTimeComponent.generated.h"

class UUWEGameplayTimeComponent;
class UUWESaveHandle;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UWEGAMEPLAYTIME_API UUWEGameplayTimeComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, SaveGame, VisibleAnywhere)
    float GameDurationSeconds;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    float SessionDurationSeconds;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FDateTime GameStartedTimestamp;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FDateTime SessionStartedTimestamp;
    
    UPROPERTY(Config)
    float UpdateSessionInterval;
    
private:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY(Replicated)
    double ServerWorldTimeOffset;
    
    UPROPERTY(SaveGame)
    double SavedElapsedGameplayTime;
    
public:
    UUWEGameplayTimeComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    static UUWEGameplayTimeComponent* GetUWEGameplayTimeComponent();
    
    UFUNCTION(BlueprintPure)
    static double GetUWEElapsedGameplayTime();
    
    UFUNCTION(BlueprintPure)
    float GetSessionDurationSeconds() const;
    
    UFUNCTION(BlueprintPure)
    float GetGameDurationSeconds() const;
    
    UFUNCTION(BlueprintPure)
    double GetElapsedGameplayTime() const;
    
    UFUNCTION(BlueprintCallable)
    void AdvanceTime(double DeltaTime);
    

    // Fix for true pure virtual functions not being implemented
};

