#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEPlayerCustomizationItemDA.h"
#include "UWEPlayerCustomizationLinkedMesh.h"
#include "UWEPlayerCustomizationItemMeshDA.generated.h"

class USkeletalMesh;

UCLASS()
class UWEPLAYERCUSTOMIZATION_API UUWEPlayerCustomizationItemMeshDA : public UUWEPlayerCustomizationItemDA {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> MeshAsset;
    
    UPROPERTY(EditAnywhere)
    TArray<FUWEPlayerCustomizationLinkedMesh> AdditionalMeshes;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UUWEPlayerCustomizationItemDA> DefaultPatternSelection;
    
    UUWEPlayerCustomizationItemMeshDA();

};

