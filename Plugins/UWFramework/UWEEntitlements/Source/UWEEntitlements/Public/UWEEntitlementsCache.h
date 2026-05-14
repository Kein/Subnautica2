#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "GameFramework/OnlineReplStructs.h"
#include "UWEEntitlementsCacheEntry.h"
#include "UWEEntitlementsCache.generated.h"

UCLASS()
class UUWEEntitlementsCache : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FUniqueNetIdRepl, FUWEEntitlementsCacheEntry> PlayerEntries;
    
    UPROPERTY()
    FUniqueNetIdRepl MostRecentlyCachedUserId;
    
    UPROPERTY(Transient)
    FString SaveSlotName;
    
    UPROPERTY(Transient)
    int32 LocalPlayerIndex;
    
public:
    UUWEEntitlementsCache();

};

