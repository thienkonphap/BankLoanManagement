#ifndef PORTFOLIO_H
#define PORTFOLIO_H

#include <vector>
#include "Facility.h"
#include "Deal.h"

class Portfolio {
public:
    // Constructor and Destructor
    Portfolio(const Deal &deal);
    ~Portfolio();

    double getTotalInterest() const;
    double getTotalPrincipal() const;

    Deal getDeal() const;
    void setDeal(const Deal& deal);

private:
    Deal deal;

};

#endif // PORTFOLIO_H
