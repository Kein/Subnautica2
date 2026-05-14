#pragma once
#include "CoreMinimal.h"
#include "MercunaMovementAdapter.h"
#include "Mer3DMovementInterfaceAdapter.generated.h"

class AActor;
class IMercuna3DMovementInterface;
class UMercuna3DMovementInterface;
class UMercuna3DNavigationComponent;

UCLASS(BlueprintType, CollapseCategories, EditInlineNew)
class UMer3DMovementInterfaceAdapter : public UMercunaMovementAdapter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseAccelerationForPaths;
    
    UPROPERTY()
    AActor* NavigatingActor;
    
    UPROPERTY(Instanced)
    UMercuna3DNavigationComponent* NavigationComponent;
    
    UPROPERTY()
    TScriptInterface<IMercuna3DMovementInterface> MovementInterface;
    
public:
    UMer3DMovementInterfaceAdapter();

};

