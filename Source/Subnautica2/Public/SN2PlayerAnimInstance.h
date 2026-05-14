#pragma once
#include "CoreMinimal.h"
#include "UWECarryableEventInterface.h"
#include "SN2BaseAnimInstance.h"
#include "Templates/SubclassOf.h"
#include "SN2PlayerAnimInstance.generated.h"

class UAnimInstance;

UCLASS(NonTransient, Config=Game)
class SUBNAUTICA2_API USN2PlayerAnimInstance : public USN2BaseAnimInstance, public IUWECarryableEventInterface {
    GENERATED_BODY()
public:
    USN2PlayerAnimInstance();

    UFUNCTION(BlueprintCallable)
    void VisualLog(const FString& Message);
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UAnimInstance> GetBestWalkAnimLayer() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UAnimInstance> GetBestSwimAnimLayer() const;
    

    // Fix for true pure virtual functions not being implemented
};

