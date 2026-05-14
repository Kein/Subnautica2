#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "KnifeTarget.generated.h"

class AController;
class APawn;

UINTERFACE(Blueprintable)
class UWEINTERFACES_API UKnifeTarget : public UInterface {
    GENERATED_BODY()
};

class UWEINTERFACES_API IKnifeTarget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void KnifeHit(AController* Controller, APawn* Pawn);
    
};

