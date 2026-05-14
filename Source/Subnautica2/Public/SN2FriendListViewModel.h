#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2FriendListViewModel.generated.h"

class USN2FriendEntryViewModel;

UCLASS()
class SUBNAUTICA2_API USN2FriendListViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<USN2FriendEntryViewModel*> FriendsViewModels;
    
    UPROPERTY()
    TMap<FString, USN2FriendEntryViewModel*> ViewModelByPlayerUniquePlatformID;
    
public:
    USN2FriendListViewModel();

    UFUNCTION(BlueprintCallable)
    void TriggerPopulateAsync(bool FromUserInput);
    
    UFUNCTION()
    void OnFriendsListGet(bool Success, const FString& ErrorStr);
    
    UFUNCTION(BlueprintCallable)
    TArray<USN2FriendEntryViewModel*> GetFriendViewModels();
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

