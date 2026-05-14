#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UWESkeletalMeshScalabilityInterface.generated.h"

UINTERFACE(Blueprintable)
class UUWESkeletalMeshScalabilityInterface : public UInterface {
    GENERATED_BODY()
};

class IUWESkeletalMeshScalabilityInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowSkeletalMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideSkeletalMesh();
    
};

