#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EUWESaveGameNetMode.h"
#include "SaveGameConverterResultDelegateDelegate.h"
#include "SN2SaveGameConverter.generated.h"

UCLASS(BlueprintType)
class SUBNAUTICA2_API USN2SaveGameConverter : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USN2SaveGameConverter();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ConvertSaveGameNetMode(const FString& SlotName, const EUWESaveGameNetMode ConvertTo, FSaveGameConverterResultDelegate OnCompleted);
    
};

