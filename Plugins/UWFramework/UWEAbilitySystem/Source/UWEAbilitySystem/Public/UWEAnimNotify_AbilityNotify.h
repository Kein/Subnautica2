#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "UWEAnimNotify_AbilityNotify.generated.h"

UCLASS(CollapseCategories)
class UWEABILITYSYSTEM_API UUWEAnimNotify_AbilityNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName NotifyName;
    
public:
    UUWEAnimNotify_AbilityNotify();

};

