#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "FMODNiagaraEventPlayer.generated.h"

class UFMODEvent;

UCLASS(EditInlineNew)
class FMODSTUDIONIAGARA_API UFMODNiagaraEventPlayer : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UFMODEvent* EventToPlay;
    
    UPROPERTY(NoClear, VisibleAnywhere)
    TArray<FName> ParameterNames;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bLimitPlaysPerTick;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 MaxPlaysPerTick;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bStopWhenComponentIsDestroyed;
    
    UFMODNiagaraEventPlayer();

};

