#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWECameraFeedClearCameraSourceDelegate.h"
#include "UWECameraFeedClearTextureDelegateDelegate.h"
#include "UWECameraFeedSetCurrentSourceDelegate.h"
#include "UWECameraFeedSetTextureDelegateDelegate.h"
#include "UWECameraFeedTargetComponent.generated.h"

class UTextureRenderTarget2D;
class UUWECameraFeedSourceComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWECAMERAFEED_API UUWECameraFeedTargetComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUWECameraFeedSetTextureDelegate OnSetCameraFeedTexture;
    
    UPROPERTY(BlueprintAssignable)
    FUWECameraFeedClearTextureDelegate OnClearCameraFeedTexture;
    
    UPROPERTY(BlueprintAssignable)
    FUWECameraFeedSetCurrentSource OnSetCameraSource;
    
    UPROPERTY(BlueprintAssignable)
    FUWECameraFeedClearCameraSource OnClearCameraSource;
    
private:
    UPROPERTY(EditDefaultsOnly)
    int32 RenderWidth;
    
    UPROPERTY(EditDefaultsOnly)
    int32 RenderHeight;
    
    UPROPERTY(EditDefaultsOnly)
    bool ScreenEnabled;
    
    UPROPERTY()
    UTextureRenderTarget2D* RenderTextureTarget;
    
    UPROPERTY(Instanced)
    UUWECameraFeedSourceComponent* PriorSource;
    
    UPROPERTY(Instanced, ReplicatedUsing=OnRep_CurrentSource)
    UUWECameraFeedSourceComponent* CurrentSource;
    
public:
    UUWECameraFeedTargetComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetSource(UUWECameraFeedSourceComponent* Source);
    
private:
    UFUNCTION()
    void OnRep_CurrentSource();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearSource();
    
};

