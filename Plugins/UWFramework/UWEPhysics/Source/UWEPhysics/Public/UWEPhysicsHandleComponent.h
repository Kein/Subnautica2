#pragma once
#include "CoreMinimal.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "UWEPhysicsHandleComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(CollapseCategories, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPHYSICS_API UUWEPhysicsHandleComponent : public UPhysicsHandleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SocketName;
    
private:
    UPROPERTY(Instanced)
    USkeletalMeshComponent* SkeletalMeshComp;
    
public:
    UUWEPhysicsHandleComponent(const FObjectInitializer& ObjectInitializer);

};

