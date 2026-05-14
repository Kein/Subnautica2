#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Camera/CameraActor.h"
#include "CameraSectionInfo.h"
#include "UWEPhotoTourCameraActor.generated.h"

class IUWEPerformanceCameraLogic;
class UUWEPerformanceCameraLogic;

UCLASS()
class UWEPHOTOTOURS_API AUWEPhotoTourCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TScriptInterface<IUWEPerformanceCameraLogic>> ControlledActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString LocationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSimulateFullGameplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FCameraSectionInfo> SectionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CameraIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGuid CameraGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> ConsoleCommandsBefore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> ConsoleCommandsAfter;
    
    AUWEPhotoTourCameraActor(const FObjectInitializer& ObjectInitializer);

};

