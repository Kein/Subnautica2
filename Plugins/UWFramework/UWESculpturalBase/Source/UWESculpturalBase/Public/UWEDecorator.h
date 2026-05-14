#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "EUWEEditActionLegality.h"
#include "UWEDecorator.generated.h"

class AActor;
class AUWESculpturalBaseActor;

UINTERFACE(Blueprintable)
class UWESCULPTURALBASE_API UUWEDecorator : public UInterface {
    GENERATED_BODY()
};

class UWESCULPTURALBASE_API IUWEDecorator : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowAsGhostChanged(bool bShowAsGhost);
    
    UFUNCTION(BlueprintNativeEvent)
    void InitializeOnBase(AUWESculpturalBaseActor* InBase, FIntVector Cell);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool ImplementsGetPlacementValidity() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool GetPlacementValidity(AUWESculpturalBaseActor* InBase, FIntVector Cell, const FTransform& Transform, const TArray<AActor*>& IgnoreActors, const bool IsDisconnectedStructure) const;
    
    UFUNCTION(BlueprintNativeEvent)
    int32 GetMinDistance() const;
    
    UFUNCTION(BlueprintNativeEvent)
    EUWEEditActionLegality GetLegality();
    
};

