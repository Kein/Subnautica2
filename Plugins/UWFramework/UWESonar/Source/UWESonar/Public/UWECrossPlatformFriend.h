#pragma once
#include "CoreMinimal.h"
#include "EGameModeAliasAsEnum.h"
#include "EUWEFriendMode.h"
#include "EUWEFriendNetMode.h"
#include "EUWEFriendType.h"
#include "UWECrossPlatformFriend.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FUWECrossPlatformFriend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString DisplayName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Presence;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString PlatformId;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString PlatformName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsJoinable;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsPlaying;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsOnline;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSoftObjectPtr<UTexture2D> ProfileImage;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EUWEFriendType FriendType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EUWEFriendMode Mode;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EUWEFriendNetMode NetMode;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EGameModeAliasAsEnum GameMode;
    
    UWESONAR_API FUWECrossPlatformFriend();
};

