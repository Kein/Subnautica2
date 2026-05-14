#include "SN2ScannerPointCloud.h"

USN2ScannerPointCloud::USN2ScannerPointCloud(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TransformScale = 0.01f;
    this->PointScale = 1.00f;
    this->ClipRadius = -1.00f;
}

void USN2ScannerPointCloud::UpdateScannerPoints(const TScriptInterface<ISN2ScannerPointDataProvider>& PointDataProvider) {
}



