#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "MVVMViewModelBase.h"
#include "SN2TeamMemberViewModel.generated.h"

class UTexture2D;
class UUWEItemType;
class UWorld;

UCLASS()
class SUBNAUTICA2_API USN2TeamMemberViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    int32 PlayerId;
    
    UPROPERTY(BlueprintReadOnly)
    FString PlayerName;
    
    UPROPERTY(BlueprintReadOnly)
    FLinearColor PlayerColor;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* PlayerIcon;
    
    UPROPERTY(BlueprintReadOnly)
    float HealthPercent;
    
    UPROPERTY(BlueprintReadOnly)
    float WaterPercent;
    
    UPROPERTY(BlueprintReadOnly)
    float FoodPercent;
    
    UPROPERTY(BlueprintReadOnly)
    float OxygenPercent;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHealthLow;
    
    UPROPERTY(BlueprintReadOnly)
    bool bWaterLow;
    
    UPROPERTY(BlueprintReadOnly)
    bool bFoodLow;
    
    UPROPERTY(BlueprintReadOnly)
    bool bOxygenLow;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly)
    float DistanceMeters;
    
    UPROPERTY(BlueprintReadOnly)
    float DepthMeters;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadOnly)
    UUWEItemType* EquippedTool;
    
    UPROPERTY(BlueprintReadOnly)
    bool bInVehicle;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasPing;
    
private:
    UPROPERTY()
    UWorld* World;
    
public:
    USN2TeamMemberViewModel();

};

