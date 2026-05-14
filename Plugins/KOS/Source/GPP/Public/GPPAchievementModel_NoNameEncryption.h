#pragma once
#include "CoreMinimal.h"
#include "GPPAchievementICon_NoNameEncryption.h"
#include "GPPAchievementModel_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPAchievementModel_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString AchievementCode;
    
    UPROPERTY()
    int32 ProgressRate;
    
    UPROPERTY()
    int32 LatestValue;
    
    UPROPERTY()
    int32 GoalValue;
    
    UPROPERTY()
    TArray<FString> Tags;
    
    UPROPERTY()
    FGPPAchievementICon_NoNameEncryption LockedIcon;
    
    UPROPERTY()
    FGPPAchievementICon_NoNameEncryption UnlockedIcon;
    
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    FString Description;
    
    UPROPERTY()
    bool Hidden;
    
    UPROPERTY()
    int64 AchievedAt;
    
    FGPPAchievementModel_NoNameEncryption();
};

