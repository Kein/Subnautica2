#include "UWEScannerStatics.h"
#include "Templates/SubclassOf.h"

UUWEScannerStatics::UUWEScannerStatics() {
}

bool UUWEScannerStatics::IsScanProgressSharedForClass(TSubclassOf<UUWEScanData> ScanDataClass) {
    return false;
}

bool UUWEScannerStatics::IsScanProgressShared(UUWEScanData* ScanData) {
    return false;
}

bool UUWEScannerStatics::IsScanDataFullyScannedForPlayer(UUWEScanData* ScanData, APlayerState* PlayerState) {
    return false;
}

UUWEScannedActorsGameStateComponent* UUWEScannerStatics::GetScannedActorsGameStateComponent(UObject* WorldContextObject) {
    return NULL;
}

UUWEScannedActorsComponent* UUWEScannerStatics::GetLocalScannedActorsComponent(UObject* WorldContextObject) {
    return NULL;
}


