#include "UWETimeSeriesStats.h"

FUWETimeSeriesStats::FUWETimeSeriesStats() {
    this->Samples = 0;
    this->outliers = 0;
    this->min = 0.00f;
    this->max = 0.00f;
    this->avg = 0.00f;
    this->median = 0.00f;
    this->std_dev = 0.00f;
    this->variance = 0.00f;
    this->kurtosis = 0.00f;
}

