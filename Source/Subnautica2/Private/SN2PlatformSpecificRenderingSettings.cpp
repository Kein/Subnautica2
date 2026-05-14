#include "SN2PlatformSpecificRenderingSettings.h"

USN2PlatformSpecificRenderingSettings::USN2PlatformSpecificRenderingSettings() {
    this->bSupportsGranularVideoQualitySettings = true;
    this->bSupportsAutomaticVideoQualityBenchmark = true;
    this->FramePacingMode = ESN2FramePacingMode::DesktopStyle;
    this->MobileFrameRateLimits.AddDefaulted(6);
}


