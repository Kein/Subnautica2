#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWENearbyActor.h"
#include "SN2NearbyDiagnostic.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2NearbyDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UClass* ScannableClass;
    
    UPROPERTY()
    UClass* ClickableBlackBoxClass;
    
    UPROPERTY()
    UClass* RecipeButtonClass;
    
    UPROPERTY()
    TArray<FUWENearbyActor> ScannableActors;
    
    UPROPERTY()
    TArray<FUWENearbyActor> AllScannableActors;
    
    UPROPERTY()
    TArray<FUWENearbyActor> ClickableActors;
    
    UPROPERTY()
    TArray<FUWENearbyActor> RecipeActors;
    
    UPROPERTY()
    TArray<FUWENearbyActor> ButtonActors;
    
public:
    USN2NearbyDiagnostic(const FObjectInitializer& ObjectInitializer);

};

