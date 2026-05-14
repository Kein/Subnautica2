#pragma once
#include "CoreMinimal.h"
#include "LobbyRefreshTokenResponse_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FLobbyRefreshTokenResponse_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Code;
    
    FLobbyRefreshTokenResponse_NoNameEncryption();
};

