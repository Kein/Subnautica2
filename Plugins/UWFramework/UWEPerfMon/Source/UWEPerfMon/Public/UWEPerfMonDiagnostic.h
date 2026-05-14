#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWEPerfMonDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPERFMON_API UUWEPerfMonDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<UClass*, int64> CountByClass;
    
    UPROPERTY()
    TMap<UClass*, int64> BaseCountByClass;
    
    UPROPERTY()
    TMap<UClass*, int64> PeakCountByClass;
    
public:
    UUWEPerfMonDiagnostic(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void CaptureData();
    
};

