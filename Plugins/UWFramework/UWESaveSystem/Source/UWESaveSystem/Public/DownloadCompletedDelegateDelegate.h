#pragma once
#include "CoreMinimal.h"
#include "SonarSaveUploadMetadata.h"
#include "UWESaveGameDownloadStatus.h"
#include "DownloadCompletedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDownloadCompletedDelegate, FUWESaveGameDownloadStatus, Status, const FString&, SlotName, const FSonarSaveUploadMetadata&, MetaData);

