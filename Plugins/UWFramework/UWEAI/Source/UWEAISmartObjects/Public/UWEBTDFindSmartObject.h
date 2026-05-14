#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "UWEBTDFindSmartObject.generated.h"

UCLASS(BlueprintType)
class UWEAISMARTOBJECTS_API UUWEBTDFindSmartObject : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagQuery ActivityRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseSightRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float QueryBoxHalfExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackboardKeySelector SmartObjectSlotLocationKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TrackMovingSmartObjectSlotLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SelectClosestSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DoVisibilityTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> VisibilityTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DoDotAngleTest_DecisionTargetVSSmartObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFloatRange DotAngleRange_DecisionTargetVSSmartObject;
    
    UUWEBTDFindSmartObject();

};

