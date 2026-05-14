#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWEAsyncTaskFetchIP.generated.h"

class UObject;
class UUWEAsyncTaskFetchIP;

UCLASS()
class UWELOBBY_API UUWEAsyncTaskFetchIP : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestCompleted, const FString&, IpAddress);
    
    UPROPERTY(BlueprintAssignable)
    FOnRequestCompleted OnRequestComplete;
    
    UUWEAsyncTaskFetchIP();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UUWEAsyncTaskFetchIP* FetchPublicIPAddress(UObject* WorldContextObject);
    
};

