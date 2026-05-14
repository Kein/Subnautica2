#pragma once
#include "CoreMinimal.h"
#include "UWEResourceActorSourceInfo.generated.h"

USTRUCT(BlueprintType)
struct FUWEResourceActorSourceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString Region;
    
    UPROPERTY(VisibleAnywhere)
    FString Rule;
    
    UPROPERTY(VisibleAnywhere)
    FString ZoneName;
    
    UPROPERTY(VisibleAnywhere)
    FString LastModified;
    
    UWEWORLDPOPULATION2_API FUWEResourceActorSourceInfo();
};

