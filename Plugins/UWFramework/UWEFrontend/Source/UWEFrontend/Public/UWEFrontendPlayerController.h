#pragma once
#include "CoreMinimal.h"
#include "LoadingProcessInterface.h"
#include "GameFramework/PlayerController.h"
#include "EUWEFrontendMenuReturnReason.h"
#include "UWEFrontendPlayerController.generated.h"

UCLASS()
class UWEFRONTEND_API AUWEFrontendPlayerController : public APlayerController, public ILoadingProcessInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    EUWEFrontendMenuReturnReason ReturnReason;
    
public:
    AUWEFrontendPlayerController(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

