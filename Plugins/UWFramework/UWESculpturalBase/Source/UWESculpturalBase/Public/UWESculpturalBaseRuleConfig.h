#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "UWEModuleRuleset.h"
#include "UWEPiecesByHash.h"
#include "UWERuntimeBaseModulePieceID.h"
#include "UWESerializedBaseBrushTypePieceHashes.h"
#include "UWESerializedBasePieceRules.h"
#include "UWESerializedDecorators.h"
#include "UWESculpturalBaseRuleConfig.generated.h"

class UUWEBaseModule;

UCLASS(BlueprintType, DefaultConfig, Config=UWESculputuralBaseRules)
class UWESCULPTURALBASE_API UUWESculpturalBaseRuleConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    TMap<TSoftObjectPtr<UUWEBaseModule>, uint32> ModuleToVersionNumber;
    
    UPROPERTY(Config)
    uint32 VersionHash;
    
    UPROPERTY(Config)
    TArray<FUWESerializedBasePieceRules> SerializedRules;
    
    UPROPERTY(Config)
    TArray<FUWESerializedBaseBrushTypePieceHashes> SerializedHashes;
    
    UPROPERTY()
    TMap<FUWERuntimeBaseModulePieceID, FUWEModuleRuleset> PieceIdToRuleset;
    
    UPROPERTY()
    TMap<FGameplayTag, FUWEPiecesByHash> PiecesByHashByBrushType;
    
    UPROPERTY(Config)
    TArray<FUWESerializedDecorators> SerializedDecorators;
    
    UUWESculpturalBaseRuleConfig();

    UFUNCTION(BlueprintCallable)
    static void LoadRules();
    
};

