#pragma once
#include "CoreMinimal.h"
#include "UWEBaseGameplayEventData.h"
#include "UWEGameplayEventParams.h"
#include "UWEGameplayEventData.generated.h"

UCLASS(EditInlineNew)
class UWEABILITYSYSTEM_API UUWEGameplayEventData : public UUWEBaseGameplayEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEGameplayEventParams EventParams;
    
    UUWEGameplayEventData();

};

