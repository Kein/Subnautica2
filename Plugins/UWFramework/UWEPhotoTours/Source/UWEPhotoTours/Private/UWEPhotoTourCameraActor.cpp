#include "UWEPhotoTourCameraActor.h"

AUWEPhotoTourCameraActor::AUWEPhotoTourCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSimulateFullGameplay = false;
    this->CameraIndex = -1;
}


