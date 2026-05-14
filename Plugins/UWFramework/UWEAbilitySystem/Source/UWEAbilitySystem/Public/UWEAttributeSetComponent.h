#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWESaveObject.h"
#include "Templates/SubclassOf.h"
#include "UWEGameplayAttributeSaveData.h"
#include "UWEAttributeSetComponent.generated.h"

class UUWEAbilitySystemComponent;
class UUWEBaseAttributeSet;
class UUWESaveHandle;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEABILITYSYSTEM_API UUWEAttributeSetComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UUWEBaseAttributeSet> AttributeSetClass;
    
    UPROPERTY(Instanced)
    UUWEAbilitySystemComponent* AbilitySystemComponent;
    
protected:
    UPROPERTY(SaveGame)
    TArray<FUWEGameplayAttributeSaveData> AttributeSaveData;
    
private:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    UUWEAttributeSetComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

