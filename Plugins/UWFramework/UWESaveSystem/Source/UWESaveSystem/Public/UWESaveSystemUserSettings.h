#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWESaveSystemUserSettings.generated.h"

UCLASS(Config=UWESaveSystemUserSetting)
class UWESAVESYSTEM_API UUWESaveSystemUserSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    bool bAutoSaveEnabled;
    
    UUWESaveSystemUserSettings();

};

