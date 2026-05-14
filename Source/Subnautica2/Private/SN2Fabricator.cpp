#include "SN2Fabricator.h"
#include "Components/SceneComponent.h"
#include "UWEAbilitySystemComponent.h"
#include "UWECrafterComponent.h"
#include "UWELoopingCuesComponent.h"
#include "UWEPoweredApplianceComponent.h"
#include "UWESaveComponent.h"

ASN2Fabricator::ASN2Fabricator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->CrafterComponent = CreateDefaultSubobject<UUWECrafterComponent>(TEXT("Crafter"));
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->CraftingLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Craft Spawn Location"));
    this->LoopingCuesComponent = CreateDefaultSubobject<UUWELoopingCuesComponent>(TEXT("LoopingCuesComponent"));
    this->CachedFabricatorWidgetClass = NULL;
    this->UWEAbilitySystemComponent = CreateDefaultSubobject<UUWEAbilitySystemComponent>(TEXT("UWEAbilitySystemComponent"));
    this->PoweredApplianceComponent = CreateDefaultSubobject<UUWEPoweredApplianceComponent>(TEXT("PoweredApplianceComponent"));
    this->ItemThrowForce = 10000.00f;
    this->CraftingLocation->SetupAttachment(RootComponent);
}

void ASN2Fabricator::StartProxyCraftCue(UUWEItemType* ItemType, float CraftingTime, AActor* RecipientActor) {
}

void ASN2Fabricator::OnCraftingStarted(const TArray<FCraftingRecipeOutput>& RecipeOutput, float CraftingTime, AActor* RecipientActor, const TScriptInterface<IUWEItemPickup>& OutputInventory) {
}

void ASN2Fabricator::OnCraftingCompleted(const TArray<FCraftingRecipeOutput>& RecipeOutput, ECraftingResults Result, AActor* RecipientActor, const TScriptInterface<IUWEItemPickup>& OutputInventory) {
}

void ASN2Fabricator::OnCrafterAnimationStateChanged(ECrafterAnimationState PreviousState, ECrafterAnimationState NewState) {
}

void ASN2Fabricator::CraftItemFromClient(UUWECraftingRecipe* Recipe) {
}

void ASN2Fabricator::ClearProxyCraftCue() {
}


