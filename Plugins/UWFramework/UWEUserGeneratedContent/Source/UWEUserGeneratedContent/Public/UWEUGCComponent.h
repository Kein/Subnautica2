#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "UWESaveObject.h"
#include "OnPlayerTextChangedDelegate.h"
#include "UWEPlayerText.h"
#include "UWEUGCComponent.generated.h"

class UUWESaveHandle;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEUSERGENERATEDCONTENT_API UUWEUGCComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnPlayerTextChanged OnPlayerTextChanged;
    
protected:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_PlayerTexts)
    TArray<FUWEPlayerText> PlayerTexts;
    
    UUWEUGCComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerSetPlayerText(FGameplayTag TextKey, const FString& PlayerText);
    
    UFUNCTION()
    void OnRep_PlayerTexts();
    
    UFUNCTION()
    void OnProfanityFilterChanged(bool bProfanityFilterEnabled);
    
    UFUNCTION(BlueprintPure)
    bool HasUserGeneratedContent() const;
    
    UFUNCTION(BlueprintPure)
    FText GetPlayerText(FGameplayTag TextKey, FText DefaultText);
    

    // Fix for true pure virtual functions not being implemented
};

