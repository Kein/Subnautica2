#include "UWEPCGBPLibrary.h"

UUWEPCGBPLibrary::UUWEPCGBPLibrary() {
}

FPCGPoint UUWEPCGBPLibrary::PCGPointSetTransform(FPCGPoint InPoint, FTransform InTransform) {
    return FPCGPoint{};
}

UObject* UUWEPCGBPLibrary::PCGLoadActor(FSoftObjectPath InPath) {
    return NULL;
}

void UUWEPCGBPLibrary::PCGAddAssetUserDataArray(UInstancedStaticMeshComponent* InstancedStaticMeshComponent, TArray<UAssetUserData*> AssetUserDataArray) {
}

TSoftObjectPtr<UTexture> UUWEPCGBPLibrary::GetMeshPaintTexture(const UStaticMeshComponent* StaticMeshComponent) {
    return NULL;
}


