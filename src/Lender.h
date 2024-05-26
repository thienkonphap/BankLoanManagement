#ifndef LENDER_H
#define LENDER_H

#include <string>

class Lender {
public:
    // Atributes
    std::string name;
    double amountLent;

    // Constructor
    Lender(const std::string &name, double amountLent);

    // Methods
    std::string getName() const;
    double getAmountLent() const;
    void setAmountLent(double amount);
private:
// You can add private attributes or methods if needed
};

#endif // LENDER_H
