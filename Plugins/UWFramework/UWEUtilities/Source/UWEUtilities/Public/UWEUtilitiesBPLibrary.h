#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBlueprintExposedLogType.h"
#include "EBlueprintExposedNetMode.h"
#include "Templates/SubclassOf.h"
#include "UWEUtilitiesBPLibrary.generated.h"

class AActor;
class UActorComponent;
class UInstancedStaticMeshComponent;
class ULevel;
class UMaterial;
class UMaterialInterface;
class UObject;
class UPrimitiveComponent;
class URuntimeVirtualTexture;
class URuntimeVirtualTextureComponent;
class USceneComponent;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(BlueprintType, Config=Game)
class UWEUTILITIES_API UUWEUtilitiesBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEUtilitiesBPLibrary();

    UFUNCTION(BlueprintCallable)
    static void UWELog(const FString& ErrorMessage, EBlueprintExposedLogType InpLogType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EBlueprintExposedNetMode SwitchOnNetMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static TMap<FVector, float> SortMapByFloatValue(UPARAM(Ref) TMap<FVector, float>& Map);
    
    UFUNCTION(BlueprintPure)
    static TArray<AActor*> SortActorsByDistance(TArray<AActor*> Actors, FVector PivotLocation);
    
    UFUNCTION(BlueprintCallable)
    static void SetScaleForISMCInstances(const TArray<int32>& IndexArray, UInstancedStaticMeshComponent* Component, FVector Scale);
    
    UFUNCTION(BlueprintCallable)
    static void SetPixelProgrammableDistance(UStaticMeshComponent* StaticMeshComponent, const float Distance);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomDataValueForAllInstances(UInstancedStaticMeshComponent* Component, TSet<int32> Indices, const int32 NewValueIndex, const float NewValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetComponentIsEditorOnly(USceneComponent* Component, const bool bIsEditorOnly);
    
    UFUNCTION(BlueprintPure)
    static FVector RandomPointWithinCircles(FVector Center, float InnerCircleRadius, float OuterCircleRadius);
    
    UFUNCTION(BlueprintPure)
    static FVector RandomPointOnSphere(FVector Center, float Radius);
    
    UFUNCTION(BlueprintPure)
    static FVector RandomPointInSphere(FVector Center, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static void MarkRenderStateDirty(UActorComponent* Component);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsWorldPartitionCellLoaded(const UObject* WorldContextObject, const FVector& WorldLocation);
    
    UFUNCTION(BlueprintPure)
    static bool IsPlayInEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static bool IsMyPlayerId(const UObject* WorldContextObject, const int32& PlayerId);
    
    UFUNCTION(BlueprintPure)
    static bool IsLocationInView(FTransform CameraTransform, FVector LocationToCheck, float FOV, float MaxDistance);
    
    UFUNCTION(BlueprintPure)
    static bool IsLocationInTargetViewCone(const FVector& Location, const AActor* Target, float HalfAngleDeg, float MaxDistance);
    
    UFUNCTION(BlueprintPure)
    static bool IsGraphicsDriverOutdated(FString& CurrentDriver, FString& RecommendedDriver);
    
    UFUNCTION(BlueprintPure)
    static bool IsActorPartOfLevel(const AActor* Actor, const ULevel* Level);
    
    UFUNCTION(BlueprintPure)
    static AActor* GetRootAttachActor(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static float GetLocationInViewPercentage(FTransform ViewTransform, FVector TargetLocation, float FOV);
    
    UFUNCTION(BlueprintPure)
    static float GetLocationInRangePercentage(FTransform ViewTransform, FVector TargetLocation, float MaxDistance);
    
    UFUNCTION(BlueprintPure)
    static FBox GetLevelBounds(const ULevel* InLevel);
    
    UFUNCTION(BlueprintPure)
    static bool GetFeatureFlag(const FString& Feature);
    
    UFUNCTION(BlueprintCallable)
    static TArray<float> GetCustomDataForIndex(UInstancedStaticMeshComponent* Component, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static FString GetCurrentLogfileCopy();
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> GetComponentChildActorsOfType(USceneComponent* ParentComponent, TSubclassOf<AActor> Type);
    
    UFUNCTION(BlueprintCallable)
    static void ForceUpdateOverlaps(UPrimitiveComponent* PrimitiveComponent);
    
    UFUNCTION(BlueprintCallable)
    static bool ForceModify(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static USceneComponent* FindSocketOwnerComponentOnActor(const AActor* Actor, const FName& SocketName);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesSkeletalMeshUseNanite(const USkeletalMeshComponent* SkeletalMeshComponent);
    
    UFUNCTION(BlueprintPure)
    static bool DoesPrimitiveComponentUseBaseMaterial(const UPrimitiveComponent* Component, UMaterial* BaseMaterial);
    
    UFUNCTION(BlueprintCallable)
    static URuntimeVirtualTextureComponent* CreateTransientRuntimeVirtualTextureComponent(AActor* Parent, URuntimeVirtualTexture* VirtualTexture);
    
    UFUNCTION(BlueprintCallable)
    static void BlightHideRemediatedStaticMeshComponents(const TArray<TSoftObjectPtr<UStaticMeshComponent>>& BlightedSMC, const TArray<TSoftObjectPtr<UStaticMesh>>& AssetsToHide, const TSet<UStaticMeshComponent*>& AlreadyRemediatingSMCs, bool HideRemediatingBlight);
    
    UFUNCTION(BlueprintPure)
    static TArray<float> BlightCalculateFadeTimeOffsetsForDistances(TArray<float> Distances, const FFloatRange FadeTimeRange, const float RemediationPulseSpeed);
    
    UFUNCTION(BlueprintCallable)
    static void AsyncLoadAndApplyMaterial(TSoftObjectPtr<UPrimitiveComponent> SoftPrimitiveComponentPtr, int32 MaterialIndex, TSoftObjectPtr<UMaterialInterface> SoftMaterialPtr);
    
    UFUNCTION(BlueprintPure)
    static TSet<int32> AddInstanceIndicesToSet(const UInstancedStaticMeshComponent* Component);
    
};

