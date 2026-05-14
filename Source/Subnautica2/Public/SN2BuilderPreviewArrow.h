#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SN2BuilderPreviewArrow.generated.h"

class UStaticMeshComponent;

UCLASS()
class SUBNAUTICA2_API ASN2BuilderPreviewArrow : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* Mesh;
    
    ASN2BuilderPreviewArrow(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void UpdatePlacement(FVector WSOrigin, FVector WSDirection, float Roll, bool ShouldFaceAway, bool IsLegal, bool IsDeconstruct);
    
};

