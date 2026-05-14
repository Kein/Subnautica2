#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayMessageLocalizedNotify.generated.h"

USTRUCT(BlueprintType)
struct FGameplayMessageLocalizedNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FGameplayTag Severity;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool PersistIntoMainMenu;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString LocalizedMessageKey;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FName LocalizedMessageStringTableID;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FText> TextArgs;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString InputActionPath;
    
    UWEGAMEPLAYMESSAGERUNTIME_API FGameplayMessageLocalizedNotify();
};

