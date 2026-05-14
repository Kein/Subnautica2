#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "SN2PingScreenWidget.generated.h"

class UCommonTextStyle;
class UUWEPingSystemComponent;

UCLASS(EditInlineNew)
class SUBNAUTICA2_API USN2PingScreenWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUWEPingSystemComponent* PingSystemComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCommonTextStyle> DistanceTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCommonTextStyle> NameTextStyle;
    
public:
    USN2PingScreenWidget();

};

