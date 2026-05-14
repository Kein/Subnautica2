#pragma once
#include "CoreMinimal.h"
#include "UWESaveGameCustomInfoProperty.generated.h"

USTRUCT()
struct UWESAVESYSTEM_API FUWESaveGameCustomInfoProperty {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    FString Value;
    
    FUWESaveGameCustomInfoProperty();
};

