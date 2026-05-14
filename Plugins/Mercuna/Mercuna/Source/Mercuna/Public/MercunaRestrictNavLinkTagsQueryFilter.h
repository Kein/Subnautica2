#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MercunaNavigation2DQueryFilter.h"
#include "MercunaRestrictNavLinkTagsQueryFilter.generated.h"

USTRUCT()
struct FMercunaRestrictNavLinkTagsQueryFilter : public FMercunaNavigation2DQueryFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery TagQuery;
    
    MERCUNA_API FMercunaRestrictNavLinkTagsQueryFilter();
};

