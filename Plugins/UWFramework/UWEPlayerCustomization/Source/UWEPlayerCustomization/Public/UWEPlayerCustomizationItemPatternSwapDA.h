#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEPlayerCustomizationItemDA.h"
#include "UWEPlayerCustomizationItemPatternSwapDA.generated.h"

class UMaterialInterface;
class UTexture2D;

UCLASS()
class UWEPLAYERCUSTOMIZATION_API UUWEPlayerCustomizationItemPatternSwapDA : public UUWEPlayerCustomizationItemDA {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> Material;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> LODMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> PaperDollImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> InventoryPaperDollImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor UISwatchColorLeft;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor UISwatchColorRight;
    
    UUWEPlayerCustomizationItemPatternSwapDA();

};

