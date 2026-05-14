#include "UWEAIMovementGroupingModuleSettings.h"

UUWEAIMovementGroupingModuleSettings::UUWEAIMovementGroupingModuleSettings() {
    this->CohesionWeight = 1.00f;
    this->SeparationWeight = 1.00f;
    this->AlignmentWeight = 1.00f;
    this->EnableGroupInnerRadius = false;
    this->GroupInnerRadius = 0.00f;
    this->EnableGroupOuterRadius = false;
    this->GroupOuterRadius = 1000.00f;
    this->UseLeaderAsGroupCenter = true;
    this->LeaderGroupCenterLeash = 0.00f;
    this->AddSteeringWithLeader = false;
    this->SteeringWithLeaderWeight = 0.10f;
    this->RemapAVGGroupForceProportionTo1 = true;
    this->AVGGroupForceProportionMoveTime = 4.00f;
    this->LeaderMatchVelocityWithGroup = true;
    this->LeaderVelocityDropDistance = 50.00f;
    this->LeadSkipsNeighbourActiveCheck = false;
    this->IgnoreCollisionBetweenMembers = true;
}


