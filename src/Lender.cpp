#include "Lender.h"

// Constructor
Lender::Lender(const std::string& name, double amountLent)
    : name(name), amountLent(amountLent) {}

// Get the name of the lender
std::string Lender::getName() const {
    return name;
}

// Get the amount lent by the lender
double Lender::getAmountLent() const {
    return amountLent;
}

// Set the amount lent by the lender
void Lender::setAmountLent(double amount) {
    amountLent = amount;
}
