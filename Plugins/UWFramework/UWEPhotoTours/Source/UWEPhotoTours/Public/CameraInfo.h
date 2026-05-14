#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CameraSectionInfo.h"
#include "CameraInfo.generated.h"

class AUWEPhotoTourCameraActor;

USTRUCT(BlueprintType)
struct FCameraInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString ActorName;
    
    UPROPERTY(BlueprintReadWrite)
    FString LocationName;
    
    UPROPERTY(BlueprintReadWrite)
    FString MapName;
    
    UPROPERTY(BlueprintReadWrite)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FCameraSectionInfo> SectionInfo;
    
    UPROPERTY(BlueprintReadWrite)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite)
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite)
    AUWEPhotoTourCameraActor* CameraActor;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite)
    FString CameraGuidString;
    
    UPROPERTY(BlueprintReadWrite)
    bool bRunning;
    
    UPROPERTY(BlueprintReadWrite)
    FDateTime StartTime;
    
    UPROPERTY(BlueprintReadWrite)
    FString CsvFileName;
    
    UPROPERTY(BlueprintReadWrite)
    FDateTime EndTime;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FString> ConsoleCommandsBefore;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FString> ConsoleCommandsAfter;
    
    UWEPHOTOTOURS_API FCameraInfo();
};

