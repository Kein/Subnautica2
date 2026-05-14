#pragma once
#include "CoreMinimal.h"
#include "UWEEventRecorder.h"
#include "UWEGameInstance.h"
#include "EUWEUserPrivilege.h"
#include "SN2GameInstance.generated.h"

class UCommonUserInfo;
class UCommonUserWidget;
class USN2SettingsViewModel;

UCLASS(NonTransient)
class SUBNAUTICA2_API USN2GameInstance : public UUWEGameInstance, public IUWEEventRecorder {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    USN2SettingsViewModel* SettingsViewModel;
    
    UPROPERTY()
    int32 EventNumber;
    
    UPROPERTY(Instanced)
    UCommonUserWidget* CompilingShadersWidget;
    
public:
    USN2GameInstance();

    UFUNCTION(BlueprintCallable)
    void ShowCompilingShadersWidget();
    
private:
    UFUNCTION()
    void PrintCacheStats();
    
    UFUNCTION()
    void OnUserPrivilegeChanged(const UCommonUserInfo* UserInfo, EUWEUserPrivilege Privilege, bool bHasPrivilege);
    

    // Fix for true pure virtual functions not being implemented
};

