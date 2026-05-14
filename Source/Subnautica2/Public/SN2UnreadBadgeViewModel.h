#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2UnreadBadgeViewModel.generated.h"

class UUWEDatabankEntry;
class UUWEEventTrackerComponent;

UCLASS()
class SUBNAUTICA2_API USN2UnreadBadgeViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UUWEDatabankEntry* DatabankEntry;
    
    UPROPERTY(Instanced)
    UUWEEventTrackerComponent* EventTracker;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsUnread;
    
    UPROPERTY(BlueprintReadWrite)
    int32 NumUnread;
    
public:
    USN2UnreadBadgeViewModel();

};

