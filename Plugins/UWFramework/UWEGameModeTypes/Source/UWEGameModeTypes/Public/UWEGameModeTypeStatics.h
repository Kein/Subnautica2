#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGameModeAliasAsEnum.h"
#include "Templates/SubclassOf.h"
#include "UWEGameModeTypeStatics.generated.h"

class AGameModeBase;
class UObject;

UCLASS(BlueprintType)
class UWEGAMEMODETYPES_API UUWEGameModeTypeStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEGameModeTypeStatics();

    UFUNCTION(BlueprintPure)
    static EGameModeAliasAsEnum GetGameModeTypeFromAlias(const FString& GameModeAlias);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EGameModeAliasAsEnum GetGameModeType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FString GetGameModeAliasFromGameModeClass(TSubclassOf<AGameModeBase> GameModeClass);
    
    UFUNCTION(BlueprintPure)
    static FString GetGameModeAliasFromAlias(const FString& GameModeAlias);
    
    UFUNCTION(BlueprintPure)
    static FString GetClassPathAliasFromGameModeClass(TSubclassOf<AGameModeBase> GameModeClass);
    
    UFUNCTION(BlueprintPure)
    static FString GetClassPathAliasFromGameModeAlias(const FString& GameModeAlias);
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> GetAllGameModeAliases();
    
};

