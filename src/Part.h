#ifndef PART_H
#define PART_H

#include <iostream>
#include <chrono>
#include "Date.h"

class Part {
public:
    // Constructors
    Part(double amount);
    Part(double amount, const Date& date);

    double getAmount() const;
    Date getDate() const;

private:
    double amount;
    Date date;

    // Helper function to get the current date
    static Date getCurrentDate();
};

#endif // PART_H
