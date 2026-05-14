#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SN2CharacterSkinTone.generated.h"

USTRUCT(BlueprintType)
struct FSN2CharacterSkinTone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor SkinToneAlbedo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SkinToneParameterName;
    
    SUBNAUTICA2_API FSN2CharacterSkinTone();
};

