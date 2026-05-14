#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWEPing.generated.h"

class AActor;
class UUWEPingData;

USTRUCT(BlueprintType)
struct UWEPINGSYSTEM_API FUWEPing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FGuid UniqueID;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FText OriginalName;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float ExpirationTimestamp;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    UUWEPingData* PingData;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FGuid OwnerActorUID;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FGuid TrackingActorUID;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* Owner;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* TrackingActor;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasTrackingActor;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* PingActor;
    
    UPROPERTY(BlueprintReadOnly)
    bool bDestroyOnTrackingActorDespawn;
    
private:
    UPROPERTY(SaveGame)
    FLinearColor ThumbnailColor;
    
public:
    FUWEPing();
};

