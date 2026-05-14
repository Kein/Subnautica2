#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GPPUISettings.generated.h"

class UUserWidget;

UCLASS()
class ONLINESUBSYSTEMGPP_API UGPPUISettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 BaseZOrder;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUserWidget> ToastMessageWidget;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUserWidget> ToastMessagePCWidget;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUserWidget> AlertWidget;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUserWidget> PlatformLoginWidget;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUserWidget> LegalAgreementPCWidget;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUserWidget> LegalAgreementWidget;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUserWidget> LegalAgreementMobileWidget;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUserWidget> LegalAgreementConsoleWidget;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUserWidget> MaintenanceWidget;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUserWidget> MaintenanceConsoleWidget;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUserWidget> PendingLoginCompleteWidget;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUserWidget> PendingLoginCompleteConsoleWidget;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUserWidget> LinkKIDByGPGSWidget;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUserWidget> PurchaseLimitWidget;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUserWidget> PendingAlertWidget;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUserWidget> PendingAlertConsoleWidget;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUserWidget> RepayWidget;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UUserWidget> RepayAlertWidget;
    
    UGPPUISettings();

};

