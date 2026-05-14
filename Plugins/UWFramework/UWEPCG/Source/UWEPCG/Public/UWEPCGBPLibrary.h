#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PCGPoint.h"
#include "UWEPCGBPLibrary.generated.h"

class UAssetUserData;
class UInstancedStaticMeshComponent;
class UObject;
class UStaticMeshComponent;
class UTexture;

UCLASS(BlueprintType)
class UUWEPCGBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEPCGBPLibrary();

    UFUNCTION(BlueprintCallable)
    static FPCGPoint PCGPointSetTransform(FPCGPoint InPoint, FTransform InTransform);
    
    UFUNCTION(BlueprintCallable)
    static UObject* PCGLoadActor(FSoftObjectPath InPath);
    
    UFUNCTION(BlueprintCallable)
    static void PCGAddAssetUserDataArray(UInstancedStaticMeshComponent* InstancedStaticMeshComponent, TArray<UAssetUserData*> AssetUserDataArray);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture> GetMeshPaintTexture(const UStaticMeshComponent* StaticMeshComponent);
    
};

