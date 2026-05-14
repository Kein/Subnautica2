#include "GPPCountdownTimer.h"

UGPPCountdownTimer::UGPPCountdownTimer() {
    this->Img_ProgressBar = NULL;
    this->T_Countdown = NULL;
    this->Timeout = 300.00f;
    this->ProgressBarMaterial = NULL;
    this->DynProgressBarMaterialIns = NULL;
}

void UGPPCountdownTimer::StopTimer() {
}

void UGPPCountdownTimer::StartTimer() {
}

void UGPPCountdownTimer::StartCountdownUntil(FDateTime InEndTime) {
}

void UGPPCountdownTimer::SetTimeout(float InTimeout) {
}

void UGPPCountdownTimer::ResumeTimer() {
}

void UGPPCountdownTimer::PauseTimer() {
}

bool UGPPCountdownTimer::IsRunning() const {
    return false;
}

bool UGPPCountdownTimer::IsPaused() const {
    return false;
}


