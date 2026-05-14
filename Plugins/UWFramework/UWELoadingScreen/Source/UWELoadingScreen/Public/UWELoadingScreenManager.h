#pragma once
#include "CoreMinimal.h"
#include "LoadingScreenManager.h"
#include "OnLoadingScreenCompleteDelegate.h"
#include "UWELoadingScreenManager.generated.h"

UCLASS()
class UWELOADINGSCREEN_API UUWELoadingScreenManager : public ULoadingScreenManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnLoadingScreenComplete OnLoadingScreenComplete;
    
    UUWELoadingScreenManager();

};

