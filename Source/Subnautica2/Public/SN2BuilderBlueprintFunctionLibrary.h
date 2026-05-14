#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SN2ConstructableParams.h"
#include "SN2BuilderBlueprintFunctionLibrary.generated.h"

class AActor;
class ASN2PlayerCharacter;

UCLASS(BlueprintType)
class SUBNAUTICA2_API USN2BuilderBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USN2BuilderBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool TryGetActorConstructableParams(FSN2ConstructableParams& ConstructableParams, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void RefundBase(ASN2PlayerCharacter* RefundingPlayer, FGuid BaseGUID, uint8 StructureId);
    
    UFUNCTION(BlueprintCallable)
    static void PingBase(ASN2PlayerCharacter* RefundingPlayer, FGuid BaseGUID, uint8 StructureId);
    
};

