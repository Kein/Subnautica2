#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "EUWEMusicVolumeLayer.h"
#include "UWEMusicVolumeComponent.generated.h"

class AActor;
class UPrimitiveComponent;
class UUUWEMusicVolumeData;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEMUSICVOLUMEMANAGER_API UUWEMusicVolumeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMusicChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UUUWEMusicVolumeData* Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWEMusicVolumeLayer Layer;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FMusicChanged OnMusicChanged;
    
public:
    UUWEMusicVolumeComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

