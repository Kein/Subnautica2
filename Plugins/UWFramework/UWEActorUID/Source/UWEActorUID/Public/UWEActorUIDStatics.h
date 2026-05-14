#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWEActorUID.h"
#include "UWEActorUIDStatics.generated.h"

class AActor;
class UObject;

UCLASS(BlueprintType)
class UWEACTORUID_API UUWEActorUIDStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEActorUIDStatics();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AActor* TryGetActorFromUID(const UObject* WorldContextObject, const FUWEActorUID& ActorUId);
    
    UFUNCTION(BlueprintPure)
    static bool IsActorUIDValid(const FUWEActorUID& ActorUId);
    
    UFUNCTION(BlueprintPure)
    static FUWEActorUID GetActorUID(AActor* Actor);
    
};

