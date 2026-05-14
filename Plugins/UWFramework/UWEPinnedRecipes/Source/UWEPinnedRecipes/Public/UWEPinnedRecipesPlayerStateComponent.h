#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWESaveObject.h"
#include "UWEPinnedRecipesPlayerStateComponent.generated.h"

class UUWEPrimaryDataAssetBase;
class UUWESaveHandle;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPINNEDRECIPES_API UUWEPinnedRecipesPlayerStateComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSN2OnRecipeUnpinned, UUWEPrimaryDataAssetBase*, Recipe);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSN2OnRecipePinned, UUWEPrimaryDataAssetBase*, Recipe);
    
    UPROPERTY(BlueprintReadOnly, Replicated, SaveGame)
    TArray<UUWEPrimaryDataAssetBase*> PinnedRecipes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxNumEntries;
    
private:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    UUWEPinnedRecipesPlayerStateComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnpinRecipe(UUWEPrimaryDataAssetBase* Recipe);
    
protected:
    UFUNCTION(Reliable, Server)
    void ServerUnpinRecipe(UUWEPrimaryDataAssetBase* Recipe);
    
    UFUNCTION(Reliable, Server)
    void ServerPinRecipe(UUWEPrimaryDataAssetBase* Recipe);
    
public:
    UFUNCTION(BlueprintCallable)
    void PinRecipe(UUWEPrimaryDataAssetBase* Recipe);
    
    UFUNCTION(BlueprintPure)
    bool IsPinned(UUWEPrimaryDataAssetBase* Recipe) const;
    

    // Fix for true pure virtual functions not being implemented
};

