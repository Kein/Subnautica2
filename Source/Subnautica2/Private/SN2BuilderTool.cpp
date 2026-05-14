#include "SN2BuilderTool.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

ASN2BuilderTool::ASN2BuilderTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->BuilderMenu = NULL;
    this->ResourceSpawnLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Resource Spawn"));
    this->EquippedInputMappingContext = NULL;
    this->EquippedInputMappingPriority = 0;
    this->ActionActiveInputMappingContext = NULL;
    this->ActionActiveAlternateInputMappingContext = NULL;
    this->ActionActiveInputMappingPriority = 0;
    this->ResourceSpawnLocation->SetupAttachment(RootComponent);
}

void ASN2BuilderTool::SetStickyGhostTarget(FGuid GhostGUID) {
}

void ASN2BuilderTool::ServerUpdateTarget_Implementation(AActor* NewTarget) {
}

void ASN2BuilderTool::OnTargetDestroyed(AActor* DestroyedActor) {
}


void ASN2BuilderTool::OnGhostRemoved(FGuid Guid) {
}


void ASN2BuilderTool::OnActiveActionChanged(USN2BuilderActionData* NewAction) {
}

FGuid ASN2BuilderTool::MakeGhostGUID() {
    return FGuid{};
}

void ASN2BuilderTool::LogMissingRequirementAnalytics(FText ConstructableName, const FUWESculpturalBaseCellCost& MissingRequirement) {
}

bool ASN2BuilderTool::IsMoveTarget(AActor* Actor) {
    return false;
}

bool ASN2BuilderTool::IsDeconstructTarget(AActor* Actor) {
    return false;
}

bool ASN2BuilderTool::IsConstructTarget(AActor* Actor) {
    return false;
}

bool ASN2BuilderTool::HasActiveAction() {
    return false;
}

FString ASN2BuilderTool::GetResourceCostDisplayString(const TArray<FUWESculpturalBaseCellCost>& Costs) {
    return TEXT("");
}

float ASN2BuilderTool::GetGhostRotationStep() {
    return 0.0f;
}

TArray<FBuildingRequirementDisplay> ASN2BuilderTool::GetBuildingRequirements(const TArray<FUWESculpturalBaseCellCost>& Costs) {
    return TArray<FBuildingRequirementDisplay>();
}

void ASN2BuilderTool::EndConstruction() {
}

bool ASN2BuilderTool::CanDeconstructTarget(AActor* Actor) {
    return false;
}

bool ASN2BuilderTool::CanAffordToConstructTarget() {
    return false;
}

void ASN2BuilderTool::BeginDeconstruction(AActor* InActorToDeconstruct) {
}

void ASN2BuilderTool::BeginConstruction(AActor* InActorToConstruct) {
}

void ASN2BuilderTool::ActivateAction(USN2BuilderActionData* NewAction) {
}

void ASN2BuilderTool::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASN2BuilderTool, Ghost);
    DOREPLIFETIME(ASN2BuilderTool, PartialResources);
}


