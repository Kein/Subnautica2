#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Engine/EngineTypes.h"
#include "SN2AnimNotify_ShapeOverlap.generated.h"

class UUWEGameplayEventData;

UCLASS(CollapseCategories)
class SUBNAUTICA2_API USN2AnimNotify_ShapeOverlap : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UUWEGameplayEventData* GameplayEventData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SphereRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UClass* ActorClassFilter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SocketName;
    
    USN2AnimNotify_ShapeOverlap();

};

