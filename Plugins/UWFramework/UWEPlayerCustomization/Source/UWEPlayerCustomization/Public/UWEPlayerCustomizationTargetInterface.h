#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EUWEPlayerCustomizationPartType.h"
#include "UWEPlayerCustomizationTargetInterface.generated.h"

class USkeletalMeshComponent;

UINTERFACE(Blueprintable)
class UUWEPlayerCustomizationTargetInterface : public UInterface {
    GENERATED_BODY()
};

class IUWEPlayerCustomizationTargetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USkeletalMeshComponent* GetMeshForPart(EUWEPlayerCustomizationPartType PartType);
    
};

