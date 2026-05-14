#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWESaveHandle.generated.h"

UCLASS(BlueprintType)
class UWESAVESYSTEM_API UUWESaveHandle : public UObject {
    GENERATED_BODY()
public:
    UUWESaveHandle();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Store() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Load() const;
    
    UFUNCTION(BlueprintPure)
    bool HasData() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableAutoSave();
    
};

