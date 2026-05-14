#pragma once
#include "CoreMinimal.h"
#include "UWEDataAssetInfoInterface.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWERecipeUnlockRuleEntry.h"
#include "EUnlockState.h"
#include "UWEUnlockNotificationPackage.h"
#include "UWEUnlockableAsset.h"
#include "SN2AxumGlyphDataAsset.generated.h"

class UTexture2D;

UCLASS()
class SUBNAUTICA2_API USN2AxumGlyphDataAsset : public UUWEPrimaryDataAssetBase, public IUWEDataAssetInfoInterface, public IUWEUnlockableAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Word;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> GlyphTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EUnlockState DefaultUnlockState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FUWERecipeUnlockRuleEntry UnlockRule;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bNotifyOnUnlock;
    
    USN2AxumGlyphDataAsset();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    FUWEUnlockNotificationPackage GetNotificationPackage() override PURE_VIRTUAL(GetNotificationPackage, return FUWEUnlockNotificationPackage{};);
    
};

