#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEActorUID.h"
#include "UWEActorUIDAttachment.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEACTORUID_API UUWEActorUIDAttachment : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_ActorUID, meta=(AllowPrivateAccess=true))
    FUWEActorUID ActorUId;
    
public:
    UUWEActorUIDAttachment(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnRep_ActorUID();
    
};

