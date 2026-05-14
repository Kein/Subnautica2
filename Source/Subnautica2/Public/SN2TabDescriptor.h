#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Templates/SubclassOf.h"
#include "SN2TabDescriptor.generated.h"

class UCommonButtonBase;
class UCommonUserWidget;
class UWidget;

USTRUCT(BlueprintType)
struct FSN2TabDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName TabId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText TabText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush IconBrush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHidden;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCommonButtonBase> TabButtonType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCommonUserWidget> TabContentType;
    
    UPROPERTY(Instanced, Transient)
    UWidget* CreatedTabContentWidget;
    
    SUBNAUTICA2_API FSN2TabDescriptor();
};

