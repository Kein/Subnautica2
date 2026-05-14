#pragma once
#include "CoreMinimal.h"
#include "EUWESaveGameConvertResult.h"
#include "SaveGameConverterResultDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FSaveGameConverterResultDelegate, EUWESaveGameConvertResult, Result);

