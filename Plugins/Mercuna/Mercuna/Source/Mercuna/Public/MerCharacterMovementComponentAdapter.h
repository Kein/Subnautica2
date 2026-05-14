#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MercunaMovementAdapter.h"
#include "MerCharacterMovementComponentAdapter.generated.h"

class UCharacterMovementComponent;

UCLASS(BlueprintType, CollapseCategories, EditInlineNew)
class UMerCharacterMovementComponentAdapter : public UMercunaMovementAdapter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool bControlPawnOrientation;
    
protected:
    UPROPERTY(Instanced)
    UCharacterMovementComponent* CharacterMovementComponent;
    
    UPROPERTY(BlueprintReadOnly)
    FVector LastInputVector;
    
public:
    UMerCharacterMovementComponentAdapter();

};

