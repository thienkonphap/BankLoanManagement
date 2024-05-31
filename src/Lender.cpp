#include "Lender.h"

// Constructors
Lender::Lender() : Company(), amountLent(0) {}

Lender::Lender(const std::string& name, double amountLent)
        : Company(name), amountLent(amountLent) {}

Lender::Lender(const std::string& name)
        : Company(name), amountLent(0) {}

// Get the amount lent by the lender
double Lender::getAmountLent() const {
    return amountLent;
}

// Set the amount lent by the lender
void Lender::setAmountLent(double amount) {
    amountLent = amount;
}
