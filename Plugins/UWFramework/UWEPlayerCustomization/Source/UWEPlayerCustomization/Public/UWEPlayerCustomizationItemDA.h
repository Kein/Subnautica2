#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "UWEPrimaryDataAssetBase.h"
#include "EUWEPlayerCustomizationPartType.h"
#include "UWEPlayerCustomizationItemDA.generated.h"

class UTexture2D;
class UUWEPlayerCustomizationItemDA;

UCLASS()
class UWEPLAYERCUSTOMIZATION_API UUWEPlayerCustomizationItemDA : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWEPlayerCustomizationPartType PartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UUWEPlayerCustomizationItemDA> RequiredItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> DisplayImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DisplayOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag AnalyticsTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Icon;
    
    UUWEPlayerCustomizationItemDA();

};

