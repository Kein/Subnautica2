#pragma once
#include "CoreMinimal.h"
#include "MercunaMoveRequest2D.h"
#include "MercunaMoveRequestSurface.generated.h"

USTRUCT()
struct MERCUNA_API FMercunaMoveRequestSurface : public FMercunaMoveRequest2D {
    GENERATED_BODY()
public:
    FMercunaMoveRequestSurface();
};

