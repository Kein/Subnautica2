#include "UWERegrowablePlantData.h"

UUWERegrowablePlantData::UUWERegrowablePlantData() {
    this->Growth = 200.00f;
    this->MaxGrowth = 200.00f;
    this->GrowthRate = 1.00f;
}

AActor* UUWERegrowablePlantData::ReplaceDummyPlant(AStaticMeshActor* PlantToReplace) {
    return NULL;
}

UUWERegrowablePlantData* UUWERegrowablePlantData::GetRegrowablePlantDataForActor(const AActor* Actor) {
    return NULL;
}


