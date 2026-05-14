#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "SN2CharacterPart.h"
#include "SN2AppliedCharacterPartEntry.generated.h"

class UChildActorComponent;

USTRUCT()
struct FSN2AppliedCharacterPartEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSN2CharacterPart Part;
    
    UPROPERTY()
    int32 PartHandle;
    
    UPROPERTY(Instanced, NotReplicated)
    UChildActorComponent* SpawnedComponent;
    
public:
    SUBNAUTICA2_API FSN2AppliedCharacterPartEntry();
};

