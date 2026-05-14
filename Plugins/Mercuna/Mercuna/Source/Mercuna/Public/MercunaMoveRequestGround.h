#pragma once
#include "CoreMinimal.h"
#include "MercunaMoveRequest2D.h"
#include "MercunaMoveRequestGround.generated.h"

USTRUCT()
struct MERCUNA_API FMercunaMoveRequestGround : public FMercunaMoveRequest2D {
    GENERATED_BODY()
public:
    FMercunaMoveRequestGround();
};

