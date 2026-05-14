#pragma once
#include "CoreMinimal.h"
#include "SaveGameSetDisplayNameFinishedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FSaveGameSetDisplayNameFinishedDelegate, bool, bSuccess, const FString&, Name);

