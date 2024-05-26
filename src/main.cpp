#include <iostream>
#include "Lender.h"
#include <string>

int main() {
    // Create Lenders
    Lender lender1(std::string("Bank A"), 500.0);
    Lender lender2(std::string("Bank B"), 200.0);

    // Display initial information
    std::cout << "Lender 1: " << lender1.getName() << ", Amount Lent: " << lender1.getAmountLent() << std::endl;
    std::cout << "Lender 2: " << lender2.getName() << ", Amount Lent: " << lender2.getAmountLent() << std::endl;

    // Modify amount lent for lender1
    lender1.setAmountLent(5500000.0);

    // Display updated information
    std::cout << "After updating amount lent for Lender 1:" << std::endl;
    std::cout << "Lender 1: " << lender1.getName() << ", Amount Lent: " << lender1.getAmountLent() << std::endl;

    return 0;
}
