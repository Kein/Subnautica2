#pragma once
#include "CoreMinimal.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWEGameplayTagResponseTableEntry.h"
#include "UWEGameplayTagResponseTable.generated.h"

UCLASS()
class UWEABILITYSYSTEM_API UUWEGameplayTagResponseTable : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FUWEGameplayTagResponseTableEntry> Entries;
    
    UUWEGameplayTagResponseTable();

};

