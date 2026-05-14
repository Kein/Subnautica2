#pragma once
#include "CoreMinimal.h"
#include "SN2ContinuousAbility.h"
#include "SN2BuilderAbility.generated.h"

class AActor;
class ASN2BuilderTool;

UCLASS()
class SUBNAUTICA2_API USN2BuilderAbility : public USN2ContinuousAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsDeconstruct;
    
    USN2BuilderAbility();

protected:
    UFUNCTION(BlueprintPure)
    bool HasValidDeconstructTarget() const;
    
    UFUNCTION(BlueprintPure)
    bool HasValidConstructTarget() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetCurrentTarget() const;
    
    UFUNCTION(BlueprintPure)
    ASN2BuilderTool* GetBuilderTool() const;
    
};

