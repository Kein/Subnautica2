#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "SN2ScannerPointDataProvider.h"
#include "SpinningScannerPointData.h"
#include "Templates/SubclassOf.h"
#include "SN2ScannerSpinningPointDataProvider.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2ScannerSpinningPointDataProvider : public USceneComponent, public ISN2ScannerPointDataProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float ScanHalfAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float ScanRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float TurnDegreesPerSecond;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    TArray<FSpinningScannerPointData> ActiveSignals;
    
private:
    UPROPERTY(Replicated)
    float CurrentRotation;
    
    UPROPERTY(EditDefaultsOnly)
    float ScanInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float ScanHalfHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float RadiusAlwaysShow;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TEnumAsByte<EObjectTypeQuery>> ScanOverlapObjectTypes;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPrimitiveComponent> ScanOverlapComponentClass;
    
    UPROPERTY(EditDefaultsOnly)
    float ScannedPointLifetime;
    
    UPROPERTY(Replicated)
    int32 SelectedPointID;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* CachedCurrentComponent;
    
    UPROPERTY()
    TMap<UPrimitiveComponent*, int32> ServerComponentToScanID;
    
    UPROPERTY()
    TMap<UPrimitiveComponent*, FSpinningScannerPointData> ServerActiveSignalsMap;
    
public:
    USN2ScannerSpinningPointDataProvider(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintImplementableEvent)
    void ServerOnSignalsUpdated();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ServerOnSelectedComponentChanged(UPrimitiveComponent* NewComponent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ServerOnNewComponentDetected(const UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UPrimitiveComponent* ServerGetSelectedComponent();
    
    UFUNCTION(BlueprintNativeEvent)
    FLinearColor ServerGetColorForComponent(const UPrimitiveComponent* Component);
    
private:
    UFUNCTION()
    void OnRegisteredComponentEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> Reason);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasSelectedPointID() const;
    
    UFUNCTION(BlueprintPure)
    float GetSmoothedRotation() const;
    
    UFUNCTION(BlueprintPure)
    FSpinningScannerPointData GetSignal(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSelectedPointID() const;
    
    UFUNCTION(BlueprintPure)
    float GetScanRadius() const;
    
    UFUNCTION(BlueprintPure)
    float GetScanHalfHeight() const;
    
    UFUNCTION(BlueprintPure)
    float GetScanHalfAngleDegrees() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumSignals() const;
    

    // Fix for true pure virtual functions not being implemented
};

