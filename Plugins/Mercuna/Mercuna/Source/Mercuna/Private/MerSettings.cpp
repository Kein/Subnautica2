#include "MerSettings.h"

UMerSettings::UMerSettings() {
    this->DebugLengthScale = 1000.00f;
    this->bAlwaysShowErrors = true;
    this->bAutoLinkNavVolumesWithGraphs = true;
    this->AlignGraphAndVolumeOrientations = EMercunaNavGraphVolumeOrientation::LinkedRotation;
    this->GeometryCollectionTimePerFrame = 0.00f;
    this->SingleThreadedJobTimePerFrame = 0.01f;
    this->WorkerThreadType = EMercunaWorkerThreadType::UnrealThreadPool;
    this->NumMercunaWorkThreads = 2;
    this->bIgnoreStepForHeightClearance = false;
    this->bWarnIfSubLevelNavGraphsNotBuiltInPersistentLevel = true;
    this->bRemoveUnseededNavGraphDataOnCook = false;
    this->bAllowNavGraphMerging = false;
    this->OctreeCellSize = 100.00f;
    this->MinPawnRadius = 1;
    this->MaxPawnRadius = 3;
}


