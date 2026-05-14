#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayMessageGeneric.h"
#include "UWESimpleMessageTestListener.generated.h"

UCLASS()
class UWEGAMEPLAYMESSAGERUNTIME_API AUWESimpleMessageTestListener : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FGameplayMessageGeneric Notification;
    
    AUWESimpleMessageTestListener(const FObjectInitializer& ObjectInitializer);

};

