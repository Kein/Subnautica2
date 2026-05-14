#pragma once
#include "CoreMinimal.h"
#include "Permission_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FPermission_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Action;
    
    UPROPERTY(EditAnywhere)
    FString Resource;
    
    UPROPERTY(EditAnywhere)
    int32 SchedAction;
    
    UPROPERTY(EditAnywhere)
    FString SchedCron;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> SchedRange;
    
    FPermission_NoNameEncryption();
};

