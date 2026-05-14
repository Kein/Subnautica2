#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ScannerPointData.h"
#include "SN2ScannerPointDataProvider.generated.h"

UINTERFACE(Blueprintable)
class USN2ScannerPointDataProvider : public UInterface {
    GENERATED_BODY()
};

class ISN2ScannerPointDataProvider : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleSelectPointByID(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetSelectedPointIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FScannerPointData GetScannerPointData(double WorldTime, int32 PointIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetNumPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetIDForPointIndex(int32 Index) const;
    
};

