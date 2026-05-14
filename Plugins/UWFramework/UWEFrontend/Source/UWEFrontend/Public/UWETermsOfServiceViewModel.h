#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "UWETermsOfServiceViewModel.generated.h"

UCLASS(Config=Game)
class UWEFRONTEND_API UUWETermsOfServiceViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config)
    FString FallbackLocale;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    FText LegalTextString;
    
    UPROPERTY(Config)
    FString LegalTextVersionRegex;
    
    UPROPERTY(Config)
    FString LegalTextExtension;
    
    UPROPERTY(Config)
    FString TOSFilename;
    
    UPROPERTY(Config)
    FString PrivacyPolicyFilename;
    
    UPROPERTY(Config)
    FString TOSFolder;
    
    UPROPERTY(Config)
    FString PrivacyPolicyFolder;
    
public:
    UUWETermsOfServiceViewModel();

    UFUNCTION(BlueprintCallable)
    void OnLegalTextAccepted();
    
    UFUNCTION(BlueprintPure)
    bool NeedsToAcceptLegalText() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
};

