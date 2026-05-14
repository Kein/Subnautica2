#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "UWEAssetRegistryStatics.generated.h"

class AActor;
class UAssetUserData;
class UDataAsset;
class UStaticMesh;
class UUWEActorDataAsset;
class UUWEPrimaryDataAssetBase;

UCLASS(BlueprintType)
class UWEASSETREGISTRY_API UUWEAssetRegistryStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEAssetRegistryStatics();

    UFUNCTION(BlueprintPure)
    static bool NotEqual_DataAsset(UUWEPrimaryDataAssetBase* A, const FString& B);
    
    UFUNCTION(BlueprintCallable)
    static UAssetUserData* GetAssetUserDataFromMeshByClass(UStaticMesh* Mesh, TSubclassOf<UAssetUserData> Class);
    
    UFUNCTION(BlueprintCallable)
    static UAssetUserData* GetAssetUserDataForActorByClass(AActor* Actor, TSubclassOf<UAssetUserData> Class);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FAssetData> GetAllDataAssetsOfClass(TSubclassOf<UDataAsset> AssetClass);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UAssetUserData*> GetAllAssetUserDataFromMesh(UStaticMesh* Mesh);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UAssetUserData*> GetAllAssetUserDataForActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllAssetUserDataAssetsForActor(AActor* Actor, TArray<UUWEPrimaryDataAssetBase*>& OutAssets);
    
    UFUNCTION(BlueprintPure)
    static UUWEActorDataAsset* GetActorDataAssetForActorSoftClass(TSoftClassPtr<AActor> ActorSoftClass, TSubclassOf<UUWEActorDataAsset> AssetDataClass);
    
    UFUNCTION(BlueprintPure)
    static UUWEActorDataAsset* GetActorDataAssetForActor(const AActor* Actor, TSubclassOf<UUWEActorDataAsset> AssetDataClass);
    
};

