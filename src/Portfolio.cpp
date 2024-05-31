#include "Portfolio.h"

// Constructor and Destructor
Portfolio::Portfolio(const Deal &deal) : deal(deal) {}

Portfolio::~Portfolio() {}

Deal Portfolio::getDeal() const {
    return deal;
}

void Portfolio::setDeal(const Deal& deal) {
    this->deal = deal;
}

double Portfolio::getTotalInterest() const {
    double totalInterest = 0.0;
    for (const auto& facility : getDeal().getFacilities()) {
        totalInterest += facility.calculateInterest();
    }
    return totalInterest;
}

double Portfolio::getTotalPrincipal() const {
    double totalPrincipal = 0.0;
    for (const auto& facility : getDeal().getFacilities()) {
        totalPrincipal += facility.getAmount();
    }
    return totalPrincipal;
}
