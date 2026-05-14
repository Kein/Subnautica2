#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWEBuilderItemsSave_Old.h"
#include "UWEBuilderItemsStub.generated.h"

UCLASS()
class UUWEBuilderItemsStub : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FUWEBuilderItemsSave_Old BuilderItemsSave;
    
    UUWEBuilderItemsStub();

};

