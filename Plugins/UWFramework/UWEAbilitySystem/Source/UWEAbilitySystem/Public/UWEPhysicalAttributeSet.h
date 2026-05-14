#pragma once
#include "CoreMinimal.h"
#include "UWEBaseAttributeSet.h"
#include "UWEGameplayAttributeData.h"
#include "UWEPhysicalAttributeSet.generated.h"

UCLASS(BlueprintType)
class UWEABILITYSYSTEM_API UUWEPhysicalAttributeSet : public UUWEBaseAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Bulk)
    FUWEGameplayAttributeData Bulk;
    
    UUWEPhysicalAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_Bulk(const FUWEGameplayAttributeData& OldValue);
    
};

