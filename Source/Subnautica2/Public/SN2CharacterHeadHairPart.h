#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SN2CharacterPart.h"
#include "SN2CharacterHeadHairPart.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSN2CharacterHeadHairPart : public FSN2CharacterPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FLinearColor> HairColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Thumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName HairColorParameterName;
    
    SUBNAUTICA2_API FSN2CharacterHeadHairPart();
};

