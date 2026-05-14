#pragma once
#include "CoreMinimal.h"
#include "CommonUserSubsystem.h"
#include "ECommonUserAvailability.h"
#include "ECommonUserPrivilege.h"
#include "ECommonUserPrivilegeResult.h"
#include "UObject/NoExportTypes.h"
#include "EUWEUserPrivilege.h"
#include "OnUWEUserPrivilegeChangedDelegate.h"
#include "UWEUserSubsystem.generated.h"

class UCommonUserInfo;
class UUWESonarSubsystem;

UCLASS()
class UWESONAR_API UUWEUserSubsystem : public UCommonUserSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnUWEUserPrivilegeChanged OnUserPrivilegeChangedDelegate;
    
private:
    UPROPERTY()
    UUWESonarSubsystem* SonarSubsystem;
    
public:
    UUWEUserSubsystem();

    UFUNCTION(BlueprintPure)
    bool HasLoggedInLocalUser() const;
    
private:
    UFUNCTION()
    void HandleUserPrivilegeChanged(const UCommonUserInfo* UserInfo, ECommonUserPrivilege Privilege, ECommonUserAvailability OldAvailability, ECommonUserAvailability NewAvailability);
    
public:
    UFUNCTION(BlueprintPure)
    ECommonUserPrivilegeResult GetUserPrivilegeResult(const FPlatformUserId& PlatformUserId, EUWEUserPrivilege Privilege, bool bShowResolveUIOnFailure);
    
    UFUNCTION(BlueprintPure)
    UCommonUserInfo* GetFirstLoggedInUserInfo() const;
    
    UFUNCTION(BlueprintPure)
    bool CanSwitchPlatformUser() const;
    
};

