#include "MercunaAutoNavLinkForUpdate.h"

FMercunaAutoNavLinkForUpdate::FMercunaAutoNavLinkForUpdate() {
    this->bEnabled = false;
    this->TraversalType = EMercunaNavLinkTraversalType::OneWay;
    this->Cost = 0.00f;
}

