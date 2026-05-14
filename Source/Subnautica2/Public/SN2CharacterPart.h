#pragma once
#include "CoreMinimal.h"
#include "SN2CharacterPart.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSN2CharacterPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AActor> PartClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HiddenForLocallyControlled;
    
    SUBNAUTICA2_API FSN2CharacterPart();
};

