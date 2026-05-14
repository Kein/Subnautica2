#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWESaveGameDiagnostic.generated.h"

class UUWESaveGameDiagnosticTab;
class UUWESaveGamesTab;
class UUWESaveHandlesTab;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESAVESYSTEM_API UUWESaveGameDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UUWESaveGameDiagnosticTab* SelectedTab;
    
    UPROPERTY()
    UUWESaveGamesTab* ExistingSavesTab;
    
    UPROPERTY()
    UUWESaveHandlesTab* ActiveSaveContentsTab;
    
public:
    UUWESaveGameDiagnostic(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnSaveCompleted(bool Result);
    
};

