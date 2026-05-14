#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEPerfTestResults.generated.h"

USTRUCT()
struct FUWEPerfTestResults {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Changelist;
    
    UPROPERTY()
    FString Identifier;
    
    UPROPERTY()
    FDateTime Timestamp;
    
    UPROPERTY()
    FString Version;
    
    UPROPERTY()
    FString build_configuration;
    
    UPROPERTY()
    FString map_name;
    
    UPROPERTY()
    FString gpu_brand;
    
    UPROPERTY()
    FString cpu_vendor;
    
    UPROPERTY()
    FString cpu_brand;
    
    UPROPERTY()
    bool build_machine;
    
    UPROPERTY()
    int32 num_cores;
    
    UPROPERTY()
    int32 num_virtual_cores;
    
    UPROPERTY()
    int32 ram_gb;
    
    UPROPERTY()
    FString computer_name;
    
    UPROPERTY()
    FString os_id;
    
    UPROPERTY()
    FString os_username;
    
    UPROPERTY()
    FString PlayerName;
    
    UPROPERTY()
    FString game_config;
    
    UPROPERTY()
    FString Group;
    
    UPROPERTY()
    bool completed;
    
    UPROPERTY()
    FString commandline;
    
    UPROPERTY()
    int32 scalability_level;
    
    UPROPERTY()
    int32 res_x;
    
    UPROPERTY()
    int32 res_y;
    
    UPROPERTY()
    int32 test_screen_percentage;
    
    UPROPERTY()
    int32 secondary_screen_percentage;
    
    UWEAUTOMATIONTESTING_API FUWEPerfTestResults();
};

