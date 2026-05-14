#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWEFriendInviteContext.generated.h"

class UCommonSession_SearchResult;

UCLASS(BlueprintType)
class UUWEFriendInviteContext : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString SessionName;
    
    UPROPERTY()
    UCommonSession_SearchResult* SearchResult;
    
    UUWEFriendInviteContext();

};

