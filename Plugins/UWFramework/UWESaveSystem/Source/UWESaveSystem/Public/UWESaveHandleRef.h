#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWESaveHandleRef.generated.h"

class UUWESaveHandle;

USTRUCT()
struct FUWESaveHandleRef {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FGuid ID;
    
    UPROPERTY(SaveGame)
    TSoftClassPtr<UObject> ClassPath;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UUWESaveHandle> Handle;
    
    UWESAVESYSTEM_API FUWESaveHandleRef();
};

