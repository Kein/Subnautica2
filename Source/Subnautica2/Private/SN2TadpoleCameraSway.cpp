#include "SN2TadpoleCameraSway.h"

USN2TadpoleCameraSway::USN2TadpoleCameraSway() {
    this->SN2TadpoleCameraSwayRestRate = 2.00f;
    this->SN2SeafrogCameraSwayRestRate = 1.50f;
    this->SN2TadpoleCameraSwayMaxAngle = 15.00f;
    this->SN2TSeafrogCameraSwayMaxAngle = 20.00f;
    this->SN2TadpoleCameraMoveRate = 0.08f;
    this->SN2SeafrogCameraMoveRate = 0.50f;
}

void USN2TadpoleCameraSway::OnInputYaw(float Angle) {
}

void USN2TadpoleCameraSway::OnInputPitch(float Angle) {
}


