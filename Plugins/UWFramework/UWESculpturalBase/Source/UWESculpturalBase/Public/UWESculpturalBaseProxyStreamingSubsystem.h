#pragma once
#include "CoreMinimal.h"
#include "UWEServerWorldSubsystem.h"
#include "UWEStreamingBaseProxyInfo.h"
#include "UWESculpturalBaseProxyStreamingSubsystem.generated.h"

UCLASS()
class UWESCULPTURALBASE_API UUWESculpturalBaseProxyStreamingSubsystem : public UUWEServerWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FUWEStreamingBaseProxyInfo> StreamingProxies;
    
public:
    UUWESculpturalBaseProxyStreamingSubsystem();

};

