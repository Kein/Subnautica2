#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWESubmarineModuleSettings.generated.h"

class AActor;

UCLASS(DefaultConfig, Config=UWESubmarine)
class UWESUBMARINE_API UUWESubmarineModuleSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<AActor> InteriorWaterVolumeClass;
    
    UUWESubmarineModuleSettings();

};

