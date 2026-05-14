#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "ScannerPointData.h"
#include "SN2ScannerPointCloud.generated.h"

class ISN2ScannerPointDataProvider;
class USN2ScannerPointDataProvider;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2ScannerPointCloud : public UInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float TransformScale;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PointScale;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ClipRadius;
    
    USN2ScannerPointCloud(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateScannerPoints(const TScriptInterface<ISN2ScannerPointDataProvider>& PointDataProvider);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ApplyLocalTransform(const FScannerPointData PointData, FTransform LocalTransform, FTransform& OutLocalTransform) const;
    
};

