#pragma once
#include "CoreMinimal.h"
#include "LobbyGaClaimVerifiedNotif_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FLobbyGaClaimVerifiedNotif_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString ClaimId;
    
    UPROPERTY(EditAnywhere)
    FString OldGAId;
    
    UPROPERTY(EditAnywhere)
    FString NewGAId;
    
    FLobbyGaClaimVerifiedNotif_NoNameEncryption();
};

