#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEBaseModulePieceID.h"
#include "SN2ActorOverrideModule.h"
#include "SN2ConstructActorOverrideKey.generated.h"

USTRUCT(BlueprintType)
struct FSN2ConstructActorOverrideKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer BrushTypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 AllowedSurfaces;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSet<FUWEBaseModulePieceID> AllowedModulePieces;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSN2ActorOverrideModule> AllowedModules;
    
    SUBNAUTICA2_API FSN2ConstructActorOverrideKey();
};
FORCEINLINE uint32 GetTypeHash(const FSN2ConstructActorOverrideKey) { return 0; }

