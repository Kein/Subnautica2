#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UWEUnlockNotificationPackage.h"
#include "UWEUnlockableAsset.generated.h"

UINTERFACE(Blueprintable)
class UWEUNLOCKABLES_API UUWEUnlockableAsset : public UInterface {
    GENERATED_BODY()
};

class UWEUNLOCKABLES_API IUWEUnlockableAsset : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetUnlockableAssetName();
    
    UFUNCTION()
    virtual FUWEUnlockNotificationPackage GetNotificationPackage() PURE_VIRTUAL(GetNotificationPackage, return FUWEUnlockNotificationPackage{};);
    
};

