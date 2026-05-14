#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TimerHandle.h"
#include "UWEGlintableScannable.generated.h"

class UUWEItemType;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESCANNER_API UUWEGlintableScannable : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGlintRemoved);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGlintAdded);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 GlintDistanceMeters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UUWEItemType> RequiredTool;
    
    UPROPERTY(BlueprintAssignable)
    FOnGlintAdded OnGlintAdded;
    
    UPROPERTY(BlueprintAssignable)
    FOnGlintRemoved OnGlintRemoved;
    
protected:
    UPROPERTY()
    bool bGlintActive;
    
    UPROPERTY()
    FTimerHandle CheckGlintTimer;
    
public:
    UUWEGlintableScannable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool ShouldGlint() const;
    
    UFUNCTION(BlueprintPure)
    bool LocalPlayerHasGlintableTool() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLocalPlayerClose() const;
    
protected:
    UFUNCTION()
    void CheckGlint();
    
};

