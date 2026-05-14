#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SonarPlayerState.h"
#include "UWESonarPlayerStateComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESONAR_API UUWESonarPlayerStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_SonarPlayerStateUpdated)
    FSonarPlayerState SonarPlayerState;
    
    UUWESonarPlayerStateComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void SetSonarInfo(const FString& _SonarPlayerId, const FString& PlatformUserId, const FString& _PlatformProvider);
    
private:
    UFUNCTION()
    void OnRep_SonarPlayerStateUpdated() const;
    
public:
    UFUNCTION(BlueprintPure)
    FString GetSonarPlayerId();
    
};

