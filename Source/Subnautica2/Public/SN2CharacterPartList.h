#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "SN2AppliedCharacterPartEntry.h"
#include "SN2CharacterPartList.generated.h"

class USN2PlayerArchetypeComponent;

USTRUCT(BlueprintType)
struct FSN2CharacterPartList : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FSN2AppliedCharacterPartEntry> Entries;
    
    UPROPERTY(Instanced, NotReplicated)
    USN2PlayerArchetypeComponent* OwnerComponent;
    
public:
    SUBNAUTICA2_API FSN2CharacterPartList();
};

