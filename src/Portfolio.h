#ifndef PORTFOLIO_H
#define PORTFOLIO_H

#include <vector>
#include "Facility.h"

class Portfolio {
public:
    // Constructor and Destructor
    Portfolio();
    ~Portfolio();

    // Methods to manage facilities
    void addFacility(const Facility& facility);
    double getTotalInterest() const;
    double getTotalPrincipal() const;

private:
    std::vector<Facility> facilities;
};

#endif // PORTFOLIO_H
