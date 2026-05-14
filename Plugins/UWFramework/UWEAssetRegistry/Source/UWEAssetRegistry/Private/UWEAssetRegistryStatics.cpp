#include "UWEAssetRegistryStatics.h"
#include "Templates/SubclassOf.h"

UUWEAssetRegistryStatics::UUWEAssetRegistryStatics() {
}

bool UUWEAssetRegistryStatics::NotEqual_DataAsset(UUWEPrimaryDataAssetBase* A, const FString& B) {
    return false;
}

UAssetUserData* UUWEAssetRegistryStatics::GetAssetUserDataFromMeshByClass(UStaticMesh* Mesh, TSubclassOf<UAssetUserData> Class) {
    return NULL;
}

UAssetUserData* UUWEAssetRegistryStatics::GetAssetUserDataForActorByClass(AActor* Actor, TSubclassOf<UAssetUserData> Class) {
    return NULL;
}

TArray<FAssetData> UUWEAssetRegistryStatics::GetAllDataAssetsOfClass(TSubclassOf<UDataAsset> AssetClass) {
    return TArray<FAssetData>();
}

TArray<UAssetUserData*> UUWEAssetRegistryStatics::GetAllAssetUserDataFromMesh(UStaticMesh* Mesh) {
    return TArray<UAssetUserData*>();
}

TArray<UAssetUserData*> UUWEAssetRegistryStatics::GetAllAssetUserDataForActor(AActor* Actor) {
    return TArray<UAssetUserData*>();
}

void UUWEAssetRegistryStatics::GetAllAssetUserDataAssetsForActor(AActor* Actor, TArray<UUWEPrimaryDataAssetBase*>& OutAssets) {
}

UUWEActorDataAsset* UUWEAssetRegistryStatics::GetActorDataAssetForActorSoftClass(TSoftClassPtr<AActor> ActorSoftClass, TSubclassOf<UUWEActorDataAsset> AssetDataClass) {
    return NULL;
}

UUWEActorDataAsset* UUWEAssetRegistryStatics::GetActorDataAssetForActor(const AActor* Actor, TSubclassOf<UUWEActorDataAsset> AssetDataClass) {
    return NULL;
}


