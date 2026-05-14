#pragma once
#include "CoreMinimal.h"
#include "MercunaMoveRequest.h"
#include "MercunaMoveRequest3D.generated.h"

USTRUCT()
struct MERCUNA_API FMercunaMoveRequest3D : public FMercunaMoveRequest {
    GENERATED_BODY()
public:
    FMercunaMoveRequest3D();
};

