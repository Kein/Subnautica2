#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "UObject/NoExportTypes.h"
#include "MercunaNav2DQuerierInterface.h"
#include "MercunaNavigationComponent.h"
#include "Mercuna2DNavigationComponent.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MERCUNA_API UMercuna2DNavigationComponent : public UMercunaNavigationComponent, public IMercunaNav2DQuerierInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAutoGenLinkTraversalStarted, FVector, StartPosition, FVector, EndPosition, FVector, SuggestedLaunchVelocity);
    
    UPROPERTY(BlueprintAssignable)
    FOnAutoGenLinkTraversalStarted OnAutoGenLinkTraversalStarted;
    
protected:
    UPROPERTY(EditAnywhere)
    FInstancedStruct QueryFilter;
    
public:
    UMercuna2DNavigationComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

