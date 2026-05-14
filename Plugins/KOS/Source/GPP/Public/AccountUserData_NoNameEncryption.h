#pragma once
#include "CoreMinimal.h"
#include "Ban_NoNameEncryption.h"
#include "Permission_NoNameEncryption.h"
#include "AccountUserData_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FAccountUserData_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString AuthType;
    
    UPROPERTY(EditAnywhere)
    TArray<FBan_NoNameEncryption> Bans;
    
    UPROPERTY(EditAnywhere)
    FString Country;
    
    UPROPERTY(EditAnywhere)
    FString CreatedAt;
    
    UPROPERTY(EditAnywhere)
    bool Eligible;
    
    UPROPERTY(EditAnywhere)
    FString DateOfBirth;
    
    UPROPERTY(EditAnywhere)
    FString DisplayName;
    
    UPROPERTY(EditAnywhere)
    bool EmailVerified;
    
    UPROPERTY(EditAnywhere)
    bool Enabled;
    
    UPROPERTY(EditAnywhere)
    FString LastEnabledChangedTime;
    
    UPROPERTY(EditAnywhere)
    FString LoginId;
    
    UPROPERTY(EditAnywhere)
    FString Namespace;
    
    UPROPERTY(EditAnywhere)
    TArray<FPermission_NoNameEncryption> Permissions;
    
    UPROPERTY(EditAnywhere)
    bool PhoneVerified;
    
    UPROPERTY(EditAnywhere)
    FString PlatformId;
    
    UPROPERTY(EditAnywhere)
    FString PlatformUserId;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> Roles;
    
    UPROPERTY(EditAnywhere)
    FString UserId;
    
    UPROPERTY(EditAnywhere)
    FString UserName;
    
    UPROPERTY(EditAnywhere)
    FString EmailAddress;
    
    UPROPERTY(EditAnywhere)
    FString AvatarUrl;
    
    FAccountUserData_NoNameEncryption();
};

