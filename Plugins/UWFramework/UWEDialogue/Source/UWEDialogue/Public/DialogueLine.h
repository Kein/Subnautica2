#pragma once
#include "CoreMinimal.h"
#include "DialogueLine.generated.h"

class UFMODEvent;
class USoundBase;
class UUWEDialogueSpeakingCharacter;

USTRUCT(BlueprintType)
struct FDialogueLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool UseSimpleSubtitles;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UUWEDialogueSpeakingCharacter> Speaker;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UFMODEvent> FMODEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString EventKey;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<USoundBase> Sound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText SpokenText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PlaybackLength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString Comment;
    
    UWEDIALOGUE_API FDialogueLine();
};

