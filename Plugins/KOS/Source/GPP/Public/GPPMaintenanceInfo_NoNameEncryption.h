#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EGPPMaintenanceInfoDisplayPeriodType_NoNameEncryption.h"
#include "GPPMaintenanceInfo_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FGPPMaintenanceInfo_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ID;
    
    UPROPERTY()
    FString Namespace;
    
    UPROPERTY()
    TArray<FString> TargetClients;
    
    UPROPERTY()
    FDateTime StartDate;
    
    UPROPERTY()
    FDateTime EndDate;
    
    UPROPERTY()
    FDateTime CurrentTime;
    
    UPROPERTY()
    FString Comment;
    
    UPROPERTY()
    FString Status;
    
    UPROPERTY()
    FDateTime CreateAt;
    
    UPROPERTY()
    FDateTime UpdateAt;
    
    UPROPERTY()
    FString ExternalUrl;
    
    UPROPERTY()
    FString MaintenanceTitle;
    
    UPROPERTY()
    FString MaintenanceDetail;
    
    UPROPERTY()
    EGPPMaintenanceInfoDisplayPeriodType_NoNameEncryption DisplayPeriodType;
    
    UPROPERTY()
    bool ShowRemainingTime;
    
    UPROPERTY()
    FDateTime DisplayStartDate;
    
    UPROPERTY()
    FDateTime DisplayEndDate;
    
    FGPPMaintenanceInfo_NoNameEncryption();
};

