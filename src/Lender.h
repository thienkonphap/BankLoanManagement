#ifndef LENDER_H
#define LENDER_H

#include <string>
#include "Company.h"

class Lender : public Company {
public:
    // Constructors
    Lender();
    Lender(const std::string& name, double amountLent);
    Lender(const std::string& name);

    // Getters and Setters
    double getAmountLent() const;
    void setAmountLent(double amount);

private:
    double amountLent;
};

#endif // LENDER_H
