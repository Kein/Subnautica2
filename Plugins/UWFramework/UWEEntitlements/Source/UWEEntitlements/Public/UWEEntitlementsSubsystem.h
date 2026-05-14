#pragma once
#include "CoreMinimal.h"
#include "ECommonUserAvailability.h"
#include "ECommonUserOnlineContext.h"
#include "ECommonUserPrivilege.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UWEOnEntitlementsGrantedDelegateDelegate.h"
#include "UWEEntitlementsSubsystem.generated.h"

class UCommonUserInfo;

UCLASS(BlueprintType)
class UWEENTITLEMENTS_API UUWEEntitlementsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUWEOnEntitlementsGrantedDelegate OnEntitlementsGranted;
    
    UUWEEntitlementsSubsystem();

private:
    UFUNCTION()
    void OnUserPrivilegeChanged(const UCommonUserInfo* UserInfo, ECommonUserPrivilege Privilege, ECommonUserAvailability OldAvailability, ECommonUserAvailability NewAvailability);
    
    UFUNCTION()
    void OnUserInitialized(const UCommonUserInfo* UserInfo, bool bSuccess, FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext);
    
    UFUNCTION()
    void OnSonarLoginCompleted(bool bLoggedIn);
    
    UFUNCTION(BlueprintCallable)
    void CheckSonarEntitlements();
    
};

