#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "SN2GhostSubsystem.generated.h"

class ASN2BuilderGhost;

UCLASS(BlueprintType)
class SUBNAUTICA2_API USN2GhostSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGhostRemoved, FGuid, Guid);
    
    USN2GhostSubsystem();

    UFUNCTION(BlueprintPure)
    TArray<ASN2BuilderGhost*> FuzzyFindGhostsInRadius(FVector Location, float Radius) const;
    
};

