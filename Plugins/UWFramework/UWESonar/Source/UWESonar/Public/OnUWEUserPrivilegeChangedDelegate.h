#pragma once
#include "CoreMinimal.h"
#include "EUWEUserPrivilege.h"
#include "OnUWEUserPrivilegeChangedDelegate.generated.h"

class UCommonUserInfo;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnUWEUserPrivilegeChanged, const UCommonUserInfo*, UserInfo, EUWEUserPrivilege, ChangedPrivilege, bool, bHasPrivilege);

