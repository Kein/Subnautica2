#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWEAIAttackTicketPool.h"
#include "UWEViewerHandle.h"
#include "UWEViewerInfo.h"
#include "UWEAIDirectorSubsystem.generated.h"

class AActor;

UCLASS()
class UWEAI_API UUWEAIDirectorSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FUWEViewerInfo> Viewers;
    
    UPROPERTY(Transient)
    TMap<uint32, FUWEViewerHandle> ViewerMap;
    
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<AActor>, FUWEAIAttackTicketPool> AttackTicketPools;
    
public:
    UUWEAIDirectorSubsystem();

    UFUNCTION()
    void OnPlayerControllerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);

    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UUWEAIDirectorSubsystem, STATGROUP_Tickables); }
};

