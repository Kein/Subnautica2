#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "UWECollisionImpactObjectData.h"
#include "UWEOnCollisionImpactDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FUWEOnCollisionImpact, UPrimitiveComponent*, OtherComponent, const FUWECollisionImpactObjectData&, Payload, const FHitResult&, Hit);

