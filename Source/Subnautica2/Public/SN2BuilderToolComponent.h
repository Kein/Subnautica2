#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "UWESaveObject.h"
#include "SN2BuilderSnapping.h"
#include "SN2BuilderToolComponent.generated.h"

class ASN2PlayerCharacter;
class UUWESaveHandle;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2BuilderToolComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSnappingChanged);
    
    UPROPERTY(BlueprintAssignable)
    FOnSnappingChanged OnSnappingChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    FSN2BuilderSnapping Snapping;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    USN2BuilderToolComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Reliable, Server)
    void ServerRefundBase(ASN2PlayerCharacter* RefundingPlayer, FGuid BaseGUID, uint8 StructureId);
    
    UFUNCTION(Reliable, Server)
    void ServerPingBase(ASN2PlayerCharacter* Player, FGuid BaseGUID, uint8 StructureId);
    

    // Fix for true pure virtual functions not being implemented
};

