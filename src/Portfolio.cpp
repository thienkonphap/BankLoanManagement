#include "Portfolio.h"

// Constructor and Destructor
Portfolio::Portfolio() {}

Portfolio::~Portfolio() {}

// Methods to manage facilities
void Portfolio::addFacility(const Facility& facility) {
    facilities.push_back(facility);
}

double Portfolio::getTotalInterest() const {
    double totalInterest = 0.0;
    for (const auto& facility : facilities) {
        totalInterest += facility.calculateInterest();
    }
    return totalInterest;
}

double Portfolio::getTotalPrincipal() const {
    double totalPrincipal = 0.0;
    for (const auto& facility : facilities) {
        totalPrincipal += facility.getAmount();
    }
    return totalPrincipal;
}
