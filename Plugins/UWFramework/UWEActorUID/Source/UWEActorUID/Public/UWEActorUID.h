#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEActorUID.generated.h"

USTRUCT(BlueprintType)
struct UWEACTORUID_API FUWEActorUID {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FGuid InternalId;
    
public:
    FUWEActorUID();
};
FORCEINLINE uint32 GetTypeHash(const FUWEActorUID) { return 0; }

