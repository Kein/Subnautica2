#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWEEdgeOfWorldStatics.generated.h"

class AActor;
class UObject;

UCLASS(BlueprintType)
class UWEEDGEOFWORLD_API UUWEEdgeOfWorldStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEEdgeOfWorldStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsPointWithinEdgeOfWorld(const UObject* WorldContextObject, FVector Point);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsPointOutOfBounds(const UObject* WorldContextObject, FVector Point);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsActorWithinEdgeOfWorld(const UObject* WorldContextObject, AActor* ActorToCheck);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsActorOutOfBounds(const UObject* WorldContextObject, AActor* ActorToCheck);
    
};

