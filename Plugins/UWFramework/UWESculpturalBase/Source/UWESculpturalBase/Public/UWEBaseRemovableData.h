#pragma once
#include "CoreMinimal.h"
#include "UWEActorDataAsset.h"
#include "EUWEBuilderRemovalMode.h"
#include "UWEBaseRemovableData.generated.h"

class AActor;
class UActorComponent;
class UUWEBaseRemovableData;

UCLASS(EditInlineNew)
class UWESCULPTURALBASE_API UUWEBaseRemovableData : public UUWEActorDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EUWEBuilderRemovalMode RemovalMode;
    
    UUWEBaseRemovableData();

    UFUNCTION(BlueprintPure)
    static UUWEBaseRemovableData* GetForComponent(UActorComponent* ActorComponent);
    
    UFUNCTION(BlueprintPure)
    static UUWEBaseRemovableData* GetForActor(const AActor* Actor);
    
};

