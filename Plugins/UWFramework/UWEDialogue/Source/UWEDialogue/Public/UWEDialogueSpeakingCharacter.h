#pragma once
#include "CoreMinimal.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWEDialogueSpeakingCharacter.generated.h"

class UTexture2D;

UCLASS()
class UWEDIALOGUE_API UUWEDialogueSpeakingCharacter : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Name;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> Icon;
    
    UUWEDialogueSpeakingCharacter();

};

