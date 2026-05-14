#pragma once
#include "CoreMinimal.h"
#include "UWESonarFriend.generated.h"

USTRUCT(BlueprintType)
struct FUWESonarFriend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString DisplayName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString alias;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Status;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString NetIDString;
    
    UWESONAR_API FUWESonarFriend();
};

