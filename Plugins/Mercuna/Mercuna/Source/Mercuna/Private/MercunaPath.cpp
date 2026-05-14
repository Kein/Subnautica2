#include "MercunaPath.h"

UMercunaPath::UMercunaPath() {
}

void UMercunaPath::RequestStartNavLink(const FMercunaNavLinkPathSectionId& ID) {
}

void UMercunaPath::NavLinkComplete() {
}

bool UMercunaPath::IsValid() const {
    return false;
}

bool UMercunaPath::IsReady() const {
    return false;
}

bool UMercunaPath::IsPartial() const {
    return false;
}

void UMercunaPath::Invalidate() {
}

FString UMercunaPath::GetStatus() const {
    return TEXT("");
}

FVector UMercunaPath::GetPoint(int32 I) const {
    return FVector{};
}

float UMercunaPath::GetPathLength() const {
    return 0.0f;
}

int32 UMercunaPath::GetNumPoints() const {
    return 0;
}

bool UMercunaPath::GetNextPathPoint(float Length, FMercunaPathPointInfo& NextPathPoint) const {
    return false;
}

bool UMercunaPath::GetNextNavLink(float Length, FMercunaPathNavLinkInfo& NextNavLink) const {
    return false;
}

void UMercunaPath::GetDebugInfo(int32& nodesUsed, bool& bOutOfNodes, float& queryTime) const {
}

bool UMercunaPath::GetAllPathPoints(TArray<FMercunaPathPointInfo>& PathPoints) const {
    return false;
}

bool UMercunaPath::GetAllNavLinks(TArray<FMercunaPathNavLinkInfo>& NavLinks) const {
    return false;
}


