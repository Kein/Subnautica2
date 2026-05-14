#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Templates/SubclassOf.h"
#include "SN2PingScreen.generated.h"

class ASN2PlayerController;
class ASN2PlayerState;
class UCanvasPanel;
class USN2PingMarkerWidget;
class USN2PingSystemViewModel;
class UUWEPingSystemComponent;

UCLASS(EditInlineNew)
class SUBNAUTICA2_API USN2PingScreen : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EdgePadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HideMarkerAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TextThresholdAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TransitionRangeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeEndDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DefaultPlayerNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<USN2PingMarkerWidget> PingMarkerClass;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UCanvasPanel* CanvasPanel;
    
private:
    UPROPERTY(Transient)
    ASN2PlayerController* PlayerController;
    
    UPROPERTY(Transient)
    ASN2PlayerState* PlayerState;
    
    UPROPERTY(Instanced, Transient)
    UUWEPingSystemComponent* PingSystemComponent;
    
    UPROPERTY(Transient)
    USN2PingSystemViewModel* PingSystemVM;
    
    UPROPERTY(Instanced, Transient)
    TArray<USN2PingMarkerWidget*> PingMarkerWidgets;
    
public:
    USN2PingScreen();

protected:
    UFUNCTION()
    void OnPlayerStateSet();
    
    UFUNCTION()
    void OnGameCaptureDisplayModeChanged();
    
};

