#include "Part.h"

// Constructor
Part::Part() : amount(0) {}
Part::Part(double amount) : amount(amount) {}

double Part::getAmount() const {
    return amount;
}


