#pragma once
#include "CoreMinimal.h"
#include "SonarEntitlementClaimedResponse.h"
#include "UWERedeemEntitlementStatus.h"
#include "CodeRedeemCompletedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCodeRedeemCompletedDelegate, FUWERedeemEntitlementStatus, Status, const FString&, BenefitDescription, const FSonarEntitlementClaimedResponse&, EntitlementResponse);

