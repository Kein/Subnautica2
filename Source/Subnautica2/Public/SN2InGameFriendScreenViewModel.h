#pragma once
#include "CoreMinimal.h"
#include "SN2FriendScreenViewModel.h"
#include "SN2InGameFriendScreenViewModel.generated.h"

UCLASS()
class SUBNAUTICA2_API USN2InGameFriendScreenViewModel : public USN2FriendScreenViewModel {
    GENERATED_BODY()
public:
    USN2InGameFriendScreenViewModel();

    UFUNCTION(BlueprintPure)
    FString GetCurrentSessionTime() const;
    
    UFUNCTION(BlueprintPure)
    FString GetCurrentSessionName() const;
    
    UFUNCTION(BlueprintPure)
    FString AssemblePlayercountString() const;
    
};

