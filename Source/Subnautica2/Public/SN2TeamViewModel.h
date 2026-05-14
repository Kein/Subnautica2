#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2TeamViewModel.generated.h"

class APlayerState;
class UObject;
class USN2TeamMemberViewModel;
class USN2TeamViewModel;
class UWorld;

UCLASS()
class SUBNAUTICA2_API USN2TeamViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TMap<APlayerState*, USN2TeamMemberViewModel*> TeamMembers;
    
private:
    UPROPERTY()
    UWorld* World;
    
public:
    USN2TeamViewModel();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static USN2TeamViewModel* GetTeamViewModel(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    USN2TeamMemberViewModel* GetTeamMemberViewModel(const APlayerState* PS);
    
};

