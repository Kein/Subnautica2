#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWESaveHandleRef.h"
#include "UWESaveRecord.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct UWESAVESYSTEM_API FUWESaveRecord {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FGuid ID;
    
    UPROPERTY(SaveGame)
    TSoftClassPtr<UObject> ClassPath;
    
    UPROPERTY(SaveGame)
    TMap<FGuid, FUWESaveHandleRef> SaveHandles;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UObject> Instance;
    
    FUWESaveRecord();
};

