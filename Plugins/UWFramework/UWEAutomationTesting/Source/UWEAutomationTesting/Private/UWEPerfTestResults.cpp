#include "UWEPerfTestResults.h"

FUWEPerfTestResults::FUWEPerfTestResults() {
    this->Changelist = 0;
    this->build_machine = false;
    this->num_cores = 0;
    this->num_virtual_cores = 0;
    this->ram_gb = 0;
    this->completed = false;
    this->scalability_level = 0;
    this->res_x = 0;
    this->res_y = 0;
    this->test_screen_percentage = 0;
    this->secondary_screen_percentage = 0;
}

