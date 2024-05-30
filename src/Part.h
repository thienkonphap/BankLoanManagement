#ifndef PART_H
#define PART_H

#include <iostream>
#include <chrono>
#include "Date.h"

class Part {
public:
    // Constructors and Destructor
    Part(double amount);
    Part(double amount, Date date);

    double getAmount() const;
    Date getDate() const;

private:
    double amount;
    Date date;
};

#endif //PART_H
