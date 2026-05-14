#pragma once
#include "CoreMinimal.h"
#include "MercunaMoveRequest.h"
#include "MercunaMoveRequest2D.generated.h"

USTRUCT()
struct MERCUNA_API FMercunaMoveRequest2D : public FMercunaMoveRequest {
    GENERATED_BODY()
public:
    FMercunaMoveRequest2D();
};

