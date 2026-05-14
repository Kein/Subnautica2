#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWESmoketestComp.generated.h"

class UUWESmoketestSubsystem;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESMOKETEST_API UUWESmoketestComp : public UActorComponent {
    GENERATED_BODY()
public:
    UUWESmoketestComp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Reliable, Server)
    void ServerMessage(const FString& Msg);
    
    UFUNCTION(Reliable, Server)
    void ServerExit();
    
    UFUNCTION(Reliable, Server)
    void ServerCheckServerLogMaxOccurrences(int32 MaxOccurrences, const FString& SearchString);
    
    UFUNCTION(Reliable, Server)
    void ServerCheckServerLogIncludes(const FString& SearchString, bool bExcludes);
    
    UFUNCTION(Reliable, Server)
    void ServerCheckConnected();
    
    UFUNCTION(Reliable, Server)
    void ServerCheckBuildNumber(int32 ClientBuildNumber);
    
private:
    UFUNCTION()
    UUWESmoketestSubsystem* GetSubsystem();
    
    UFUNCTION()
    void DoServerExit();
    
public:
    UFUNCTION(Client, Reliable)
    void ClientCheckServerLogMaxOccurrencesResponse(bool bSuccess, int32 MaxOccurrences, int32 FoundOccurrences, const FString& SearchString, const TArray<FString>& FoundLines);
    
    UFUNCTION(Client, Reliable)
    void ClientCheckServerLogIncludesResponse(bool bSuccess, const FString& SearchString, bool bExcludes);
    
    UFUNCTION(Client, Reliable)
    void ClientCheckConnectedResponse();
    
    UFUNCTION(Client, Reliable)
    void ClientCheckBuildNumberResponse(bool bSuccess, int32 ServerBuildNumber);
    
};

