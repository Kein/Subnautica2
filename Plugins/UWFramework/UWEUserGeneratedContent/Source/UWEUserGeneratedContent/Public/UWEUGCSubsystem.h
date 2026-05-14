#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnProfanityFilterChangedDelegate.h"
#include "UWEUGCSubsystem.generated.h"

UCLASS(BlueprintType, Config=UWEUserGeneratedContent)
class UWEUSERGENERATEDCONTENT_API UUWEUGCSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnProfanityFilterChanged OnProfanityFilterChanged;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> BannedWords;
    
private:
    UPROPERTY(Config, EditAnywhere)
    bool bProfanityFilterEnabled;
    
    UPROPERTY(VisibleAnywhere)
    bool bUGCDisabled;
    
public:
    UUWEUGCSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetUGCDisabled(bool bNewDisabled);
    
    UFUNCTION(BlueprintCallable)
    void SetProfanityFilterEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintPure)
    bool IsUGCDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsProfanityFilterEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    FText FilterUGCText(FText InText, FText FallbackText);
    
};

