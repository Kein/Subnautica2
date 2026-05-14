#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CommonSession_SearchResult.generated.h"

UCLASS(BlueprintType)
class COMMONUSER_API UCommonSession_SearchResult : public UObject {
    GENERATED_BODY()
public:
    UCommonSession_SearchResult();

    UFUNCTION(BlueprintPure)
    void GetStringSetting(FName Key, FString& Value, bool& bFoundValue) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPingInMs() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumOpenPublicConnections() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumOpenPrivateConnections() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxPublicConnections() const;
    
    UFUNCTION(BlueprintPure)
    void GetIntSetting(FName Key, int32& Value, bool& bFoundValue) const;
    
    UFUNCTION(BlueprintPure)
    FString GetDescription() const;
    
};

