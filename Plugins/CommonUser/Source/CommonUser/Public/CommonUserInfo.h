#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ECommonUserAvailability.h"
#include "ECommonUserInitializationState.h"
#include "ECommonUserOnlineContext.h"
#include "ECommonUserPrivilege.h"
#include "ECommonUserPrivilegeResult.h"
#include "CommonUserInfo.generated.h"

UCLASS(BlueprintType)
class COMMONUSER_API UCommonUserInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FInputDeviceId PrimaryInputDevice;
    
    UPROPERTY(BlueprintReadOnly)
    FPlatformUserId PlatformUser;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LocalPlayerIndex;
    
    UPROPERTY(BlueprintReadOnly)
    bool bCanBeGuest;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsGuest;
    
    UPROPERTY(BlueprintReadOnly)
    ECommonUserInitializationState InitializationState;
    
    UCommonUserInfo();

    UFUNCTION(BlueprintCallable)
    void SetNickname(const FString& NewNickname, ECommonUserOnlineContext Context);
    
    UFUNCTION(BlueprintPure)
    bool IsLoggedIn() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDoingLogin() const;
    
    UFUNCTION(BlueprintPure)
    ECommonUserAvailability GetPrivilegeAvailability(ECommonUserPrivilege Privilege) const;
    
    UFUNCTION(BlueprintPure)
    FString GetNickname(ECommonUserOnlineContext Context) const;
    
    UFUNCTION(BlueprintPure)
    FUniqueNetIdRepl GetNetId(ECommonUserOnlineContext Context) const;
    
    UFUNCTION(BlueprintPure)
    FString GetDebugString() const;
    
    UFUNCTION(BlueprintPure)
    ECommonUserPrivilegeResult GetCachedPrivilegeResult(ECommonUserPrivilege Privilege, ECommonUserOnlineContext Context) const;
    
};

