#include "UWEUtilitiesBPLibrary.h"
#include "Templates/SubclassOf.h"

UUWEUtilitiesBPLibrary::UUWEUtilitiesBPLibrary() {
}

void UUWEUtilitiesBPLibrary::UWELog(const FString& ErrorMessage, EBlueprintExposedLogType InpLogType) {
}

EBlueprintExposedNetMode UUWEUtilitiesBPLibrary::SwitchOnNetMode(const UObject* WorldContextObject) {
    return EBlueprintExposedNetMode::Standalone;
}

TMap<FVector, float> UUWEUtilitiesBPLibrary::SortMapByFloatValue(TMap<FVector, float>& Map) {
    return TMap<FVector, float>();
}

TArray<AActor*> UUWEUtilitiesBPLibrary::SortActorsByDistance(TArray<AActor*> Actors, FVector PivotLocation) {
    return TArray<AActor*>();
}

void UUWEUtilitiesBPLibrary::SetScaleForISMCInstances(const TArray<int32>& IndexArray, UInstancedStaticMeshComponent* Component, FVector Scale) {
}

void UUWEUtilitiesBPLibrary::SetPixelProgrammableDistance(UStaticMeshComponent* StaticMeshComponent, const float Distance) {
}

void UUWEUtilitiesBPLibrary::SetCustomDataValueForAllInstances(UInstancedStaticMeshComponent* Component, TSet<int32> Indices, const int32 NewValueIndex, const float NewValue) {
}

void UUWEUtilitiesBPLibrary::SetComponentIsEditorOnly(USceneComponent* Component, const bool bIsEditorOnly) {
}

FVector UUWEUtilitiesBPLibrary::RandomPointWithinCircles(FVector Center, float InnerCircleRadius, float OuterCircleRadius) {
    return FVector{};
}

FVector UUWEUtilitiesBPLibrary::RandomPointOnSphere(FVector Center, float Radius) {
    return FVector{};
}

FVector UUWEUtilitiesBPLibrary::RandomPointInSphere(FVector Center, float Radius) {
    return FVector{};
}

void UUWEUtilitiesBPLibrary::MarkRenderStateDirty(UActorComponent* Component) {
}

bool UUWEUtilitiesBPLibrary::IsWorldPartitionCellLoaded(const UObject* WorldContextObject, const FVector& WorldLocation) {
    return false;
}

bool UUWEUtilitiesBPLibrary::IsPlayInEditor() {
    return false;
}

bool UUWEUtilitiesBPLibrary::IsMyPlayerId(const UObject* WorldContextObject, const int32& PlayerId) {
    return false;
}

bool UUWEUtilitiesBPLibrary::IsLocationInView(FTransform CameraTransform, FVector LocationToCheck, float FOV, float MaxDistance) {
    return false;
}

bool UUWEUtilitiesBPLibrary::IsLocationInTargetViewCone(const FVector& Location, const AActor* Target, float HalfAngleDeg, float MaxDistance) {
    return false;
}

bool UUWEUtilitiesBPLibrary::IsGraphicsDriverOutdated(FString& CurrentDriver, FString& RecommendedDriver) {
    return false;
}

bool UUWEUtilitiesBPLibrary::IsActorPartOfLevel(const AActor* Actor, const ULevel* Level) {
    return false;
}

AActor* UUWEUtilitiesBPLibrary::GetRootAttachActor(AActor* Actor) {
    return NULL;
}

float UUWEUtilitiesBPLibrary::GetLocationInViewPercentage(FTransform ViewTransform, FVector TargetLocation, float FOV) {
    return 0.0f;
}

float UUWEUtilitiesBPLibrary::GetLocationInRangePercentage(FTransform ViewTransform, FVector TargetLocation, float MaxDistance) {
    return 0.0f;
}

FBox UUWEUtilitiesBPLibrary::GetLevelBounds(const ULevel* InLevel) {
    return FBox{};
}

bool UUWEUtilitiesBPLibrary::GetFeatureFlag(const FString& Feature) {
    return false;
}

TArray<float> UUWEUtilitiesBPLibrary::GetCustomDataForIndex(UInstancedStaticMeshComponent* Component, int32 Index) {
    return TArray<float>();
}

FString UUWEUtilitiesBPLibrary::GetCurrentLogfileCopy() {
    return TEXT("");
}

TArray<AActor*> UUWEUtilitiesBPLibrary::GetComponentChildActorsOfType(USceneComponent* ParentComponent, TSubclassOf<AActor> Type) {
    return TArray<AActor*>();
}

void UUWEUtilitiesBPLibrary::ForceUpdateOverlaps(UPrimitiveComponent* PrimitiveComponent) {
}

bool UUWEUtilitiesBPLibrary::ForceModify(AActor* Actor) {
    return false;
}

USceneComponent* UUWEUtilitiesBPLibrary::FindSocketOwnerComponentOnActor(const AActor* Actor, const FName& SocketName) {
    return NULL;
}

bool UUWEUtilitiesBPLibrary::DoesSkeletalMeshUseNanite(const USkeletalMeshComponent* SkeletalMeshComponent) {
    return false;
}

bool UUWEUtilitiesBPLibrary::DoesPrimitiveComponentUseBaseMaterial(const UPrimitiveComponent* Component, UMaterial* BaseMaterial) {
    return false;
}

URuntimeVirtualTextureComponent* UUWEUtilitiesBPLibrary::CreateTransientRuntimeVirtualTextureComponent(AActor* Parent, URuntimeVirtualTexture* VirtualTexture) {
    return NULL;
}

void UUWEUtilitiesBPLibrary::BlightHideRemediatedStaticMeshComponents(const TArray<TSoftObjectPtr<UStaticMeshComponent>>& BlightedSMC, const TArray<TSoftObjectPtr<UStaticMesh>>& AssetsToHide, const TSet<UStaticMeshComponent*>& AlreadyRemediatingSMCs, bool HideRemediatingBlight) {
}

TArray<float> UUWEUtilitiesBPLibrary::BlightCalculateFadeTimeOffsetsForDistances(TArray<float> Distances, const FFloatRange FadeTimeRange, const float RemediationPulseSpeed) {
    return TArray<float>();
}

void UUWEUtilitiesBPLibrary::AsyncLoadAndApplyMaterial(TSoftObjectPtr<UPrimitiveComponent> SoftPrimitiveComponentPtr, int32 MaterialIndex, TSoftObjectPtr<UMaterialInterface> SoftMaterialPtr) {
}

TSet<int32> UUWEUtilitiesBPLibrary::AddInstanceIndicesToSet(const UInstancedStaticMeshComponent* Component) {
    return TSet<int32>();
}


