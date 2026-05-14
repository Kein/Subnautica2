#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MVVMViewModelBase.h"
#include "SN2PingSystemViewModel.generated.h"

class UObject;
class USN2PingViewModel;
class UUWEPingSystemComponent;

UCLASS()
class SUBNAUTICA2_API USN2PingSystemViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    TMap<FGuid, USN2PingViewModel*> PingsMap;
    
    UPROPERTY(Instanced)
    UUWEPingSystemComponent* PingSystemComponent;
    
public:
    USN2PingSystemViewModel();

protected:
    UFUNCTION()
    void OnPingsChanged();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void Initialize(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    USN2PingViewModel* Find(FGuid UniqueID);
    
};

