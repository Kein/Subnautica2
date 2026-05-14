#pragma once
#include "CoreMinimal.h"
#include "LoadingProcessInterface.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UWELoadingScreenGISubsystem.generated.h"

class UObject;

UCLASS(BlueprintType)
class UWELOADINGSCREEN_API UUWELoadingScreenGISubsystem : public UGameInstanceSubsystem, public ILoadingProcessInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TMap<UObject*, FString> ObjectsPreventingLoadingComplete;
    
public:
    UUWELoadingScreenGISubsystem();

    UFUNCTION(BlueprintPure)
    void GetLoadingScreenString(FString& OutReason) const;
    

    // Fix for true pure virtual functions not being implemented
};

