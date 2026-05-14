#pragma once
#include "CoreMinimal.h"
#include "GameFramework/DefaultPawn.h"
#include "SN2ObserverPawn.generated.h"

class APawn;

UCLASS()
class SUBNAUTICA2_API ASN2ObserverPawn : public ADefaultPawn {
    GENERATED_BODY()
public:
    UPROPERTY()
    APawn* PreviousPawn;
    
    ASN2ObserverPawn(const FObjectInitializer& ObjectInitializer);

};

