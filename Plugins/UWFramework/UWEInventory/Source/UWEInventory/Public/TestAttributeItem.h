#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "TestAttributeItem.generated.h"

class UTestAttributeComponent;

UCLASS()
class UWEINVENTORY_API ATestAttributeItem : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    float FloatAttribute;
    
    UPROPERTY()
    double DoubleAttribute;
    
    UPROPERTY()
    int32 IntAttribute;
    
    UPROPERTY()
    bool BoolAttribute;
    
    UPROPERTY()
    FString StringAttribute;
    
    UPROPERTY()
    TArray<int32> IntArrayAttribute;
    
    UPROPERTY()
    FGameplayTag TagAttribute;
    
    UPROPERTY(Instanced)
    UTestAttributeComponent* TestAttributeComponent;
    
    ATestAttributeItem(const FObjectInitializer& ObjectInitializer);

};

