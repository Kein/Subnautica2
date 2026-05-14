#include "SN2VehicleCrafter.h"
#include "Components/SceneComponent.h"
#include "UWECrafterComponent.h"

ASN2VehicleCrafter::ASN2VehicleCrafter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->CrafterComponent = CreateDefaultSubobject<UUWECrafterComponent>(TEXT("Crafter"));
    this->CraftingLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Craft Spawn Location"));
    this->Menu = NULL;
    this->VehicleCrafterWidgetClass = NULL;
    this->WidgetClass = NULL;
    this->CraftingLocation->SetupAttachment(RootComponent);
}

void ASN2VehicleCrafter::OnCraftingStarted(const TArray<FCraftingRecipeOutput>& RecipeOutput, float CraftingTime, AActor* RecipientActor, const TScriptInterface<IUWEItemPickup>& OutputInventory) {
}

void ASN2VehicleCrafter::OnCraftingMenuClosed() {
}

void ASN2VehicleCrafter::OnCraftingError_Implementation() {
}

void ASN2VehicleCrafter::OnCraftingCompleted(const TArray<FCraftingRecipeOutput>& RecipeOutput, ECraftingResults Result, AActor* RecipientActor, const TScriptInterface<IUWEItemPickup>& OutputInventory) {
}

void ASN2VehicleCrafter::MulticastHandleCraftingResult_Implementation(const TArray<FCraftingRecipeOutput>& RecipeOutput, ECraftingResults Result) {
}

void ASN2VehicleCrafter::HandleCraftingResult_Implementation(const TArray<FCraftingRecipeOutput>& RecipeOutput, ECraftingResults Result, AActor* RecipientActor, const TScriptInterface<IUWEItemPickup>& OutputInventory) {
}

bool ASN2VehicleCrafter::EnoughSpaceForVehicle(UUWECraftingRecipe* Recipe) const {
    return false;
}

void ASN2VehicleCrafter::CraftItemFromClient(UUWECraftingRecipe* Recipe) {
}

bool ASN2VehicleCrafter::CanCraftVehicle(UUWECraftingRecipe* Recipe, FGameplayTag& ReasonOut) {
    return false;
}

bool ASN2VehicleCrafter::CanCraftCheck(UUWECraftingRecipe* Recipe) const {
    return false;
}


