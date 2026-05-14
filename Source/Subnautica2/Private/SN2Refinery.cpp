#include "SN2Refinery.h"
#include "Components/StaticMeshComponent.h"
#include "UWECrafterComponent.h"
#include "UWECraftingComponent.h"
#include "UWEInventoryComponent.h"
#include "UWEPoweredApplianceComponent.h"
#include "Net/UnrealNetwork.h"

ASN2Refinery::ASN2Refinery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root Component"));
    this->CrafterComponent = CreateDefaultSubobject<UUWECrafterComponent>(TEXT("Crafter"));
    this->CraftingComponent = CreateDefaultSubobject<UUWECraftingComponent>(TEXT("Crafting Component"));
    this->InputInventoryComponent = CreateDefaultSubobject<UUWEInventoryComponent>(TEXT("Input Inventory"));
    this->OutputInventoryComponent = CreateDefaultSubobject<UUWEInventoryComponent>(TEXT("Output Inventory"));
    this->NumSlots = 4;
    this->MainMesh = (UStaticMeshComponent*)RootComponent;
    this->StatusTextRenderComponent = NULL;
    this->CurrentRecipeTextRenderComponent = NULL;
    this->PoweredApplianceComponent = CreateDefaultSubobject<UUWEPoweredApplianceComponent>(TEXT("PoweredApplianceComponent"));
    this->WidgetClass = NULL;
    this->TimeLeftToRefine = 0.00f;
    this->ActiveRecipe = NULL;
}

void ASN2Refinery::SimulateRefining() {
}

void ASN2Refinery::SetActiveRecipeFromClient(UUWECraftingRecipe* NewRecipe) {
}

void ASN2Refinery::OnRep_TimeLeftToRefine() {
}

void ASN2Refinery::OnRep_ActiveRecipe() {
}

void ASN2Refinery::OnOutputInvChanged() {
}

void ASN2Refinery::OnMenuClosed() {
}

void ASN2Refinery::OnInputInvChanged() {
}

void ASN2Refinery::HandleCraftingResult_Implementation(const TArray<FCraftingRecipeOutput>& RecipeOutput, ECraftingResults Result, AActor* RecipientActor, const TScriptInterface<IUWEItemPickup>& OutputInventory) {
}

double ASN2Refinery::GetTimeTillNextRefining() {
    return 0.0;
}

UUWECraftingRecipe* ASN2Refinery::GetActiveRecipe() const {
    return NULL;
}

void ASN2Refinery::FillFromCommunalInventoriesFromClient() {
}

bool ASN2Refinery::CanCraftRecipe(UUWECraftingRecipe* Recipe) const {
    return false;
}

void ASN2Refinery::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASN2Refinery, TimeLeftToRefine);
    DOREPLIFETIME(ASN2Refinery, ActiveRecipe);
}


