#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MVVMViewModelBase.h"
#include "SN2RefundableBaseViewModel.generated.h"

class UObject;
class UTexture2D;

UCLASS()
class SUBNAUTICA2_API USN2RefundableBaseViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UObject* WorldContext;
    
    UPROPERTY(BlueprintReadWrite)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* Thumbnail;
    
    UPROPERTY(BlueprintReadOnly)
    FLinearColor ThumbnailColor;
    
    UPROPERTY(BlueprintReadOnly)
    float Volume;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<TSoftObjectPtr<UTexture2D>> AttachedActorsThumbnails;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid BaseGUID;
    
    UPROPERTY(BlueprintReadOnly)
    int32 StructureId;
    
public:
    USN2RefundableBaseViewModel();

};

