#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SN2CharacterPart.h"
#include "SN2CharacterPartHandle.h"
#include "SN2CharacterPartList.h"
#include "SN2SpawnedCharacterPartsChangedDelegate.h"
#include "SN2PlayerArchetypeComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2PlayerArchetypeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSN2SpawnedCharacterPartsChanged OnCharacterPartsChanged;
    
private:
    UPROPERTY(Replicated)
    FSN2CharacterPartList CharacterPartList;
    
public:
    USN2PlayerArchetypeComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveCharacterPart(FSN2CharacterPartHandle Handle);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveAllCharacterParts();
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    TArray<AActor*> GetCharacterPartActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    AActor* GetCharacterPartActor(FSN2CharacterPartHandle Handle);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    FSN2CharacterPartHandle AddCharacterPart(const FSN2CharacterPart& NewPart);
    
};

