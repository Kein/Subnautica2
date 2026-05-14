#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "MercunaNavLinkPathSectionId.h"
#include "MercunaPathNavLinkInfo.h"
#include "MercunaPathPointInfo.h"
#include "OnMercunaPathNavLinkStartDelegate.h"
#include "OnMercunaPathUpdatedDelegate.h"
#include "MercunaPath.generated.h"

UCLASS(BlueprintType)
class MERCUNA_API UMercunaPath : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FOnMercunaPathUpdated PathUpdated;
    
    UPROPERTY(BlueprintReadWrite)
    FOnMercunaPathNavLinkStart NavLinkStarted;
    
    UMercunaPath();

    UFUNCTION(BlueprintCallable)
    void RequestStartNavLink(const FMercunaNavLinkPathSectionId& ID);
    
    UFUNCTION(BlueprintCallable)
    void NavLinkComplete();
    
    UFUNCTION(BlueprintPure)
    bool IsValid() const;
    
    UFUNCTION(BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPartial() const;
    
    UFUNCTION(BlueprintCallable)
    void Invalidate();
    
    UFUNCTION(BlueprintPure)
    FString GetStatus() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetPoint(int32 I) const;
    
    UFUNCTION(BlueprintPure)
    float GetPathLength() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumPoints() const;
    
    UFUNCTION(BlueprintPure)
    bool GetNextPathPoint(float Length, FMercunaPathPointInfo& NextPathPoint) const;
    
    UFUNCTION(BlueprintPure)
    bool GetNextNavLink(float Length, FMercunaPathNavLinkInfo& NextNavLink) const;
    
protected:
    UFUNCTION(BlueprintPure)
    void GetDebugInfo(int32& nodesUsed, bool& bOutOfNodes, float& queryTime) const;
    
public:
    UFUNCTION(BlueprintPure)
    bool GetAllPathPoints(TArray<FMercunaPathPointInfo>& PathPoints) const;
    
    UFUNCTION(BlueprintPure)
    bool GetAllNavLinks(TArray<FMercunaPathNavLinkInfo>& NavLinks) const;
    
};

