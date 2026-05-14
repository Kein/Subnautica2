#pragma once
#include "CoreMinimal.h"
#include "Components/ListView.h"
#include "GameSettingListView.generated.h"

class UGameSettingVisualData;

UCLASS()
class GAMESETTINGS_API UGameSettingListView : public UListView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UGameSettingVisualData* VisualData;
    
public:
    UGameSettingListView();

};

