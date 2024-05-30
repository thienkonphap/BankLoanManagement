#include <iostream>
#include <string>
#include "Lender.h"
#include "Borrower.h"
#include "Agent.h"
#include "Date.h"
#include "Facility.h"
#include "Deal.h"

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

    // Test Borrower
    Borrower borrower(std::string("Air France"));
    // Affichage du nom du borrower
    std::cout << "Borrower Name: " << borrower.getName() << std::endl;
    borrower.setName(std::string("Easy Jet"));
    std::cout << "Borrower Name: " << borrower.getName() << std::endl;

    // Create an agent with a name
    Agent agent(std::string("Main Agent"));

    // Test default constructor
    Date date1;
    std::cout << "Default date: " << date1 << std::endl;

    // Test parameterized constructor
    Date date2(2023, 5, 28);
    std::cout << "Parameterized date: " << date2 << std::endl;

    // Test setters
    date1.setYear(2024);
    date1.setMonth(12);
    date1.setDay(31);
    std::cout << "Modified date1: " << date1 << std::endl;
    // Display the name of the agent
    std::cout << "Agent Name: " << agent.getName() << std::endl;

    // Test getters
    int year = date2.getYear();
    int month = date2.getMonth();
    int day = date2.getDay();
    std::cout << "Extracted from date2 - Year: " << year << ", Month: " << month << ", Day: " << day << std::endl;

    // Test toString
    std::cout << "date1 as string: " << date1.toString() << std::endl;
    std::cout << "date2 as string: " << date2.toString() << std::endl;

    // Test facility

    // Create a lender pool
    std::vector<Lender> pool = {
        Lender("Bank A"),
        Lender("Bank B"),
        Lender("Bank C")
    };
    // Create a deal
    Deal deal(agent, pool, borrower, 100000000, "USD", Date(2024, 5, 1), Date(2034, 5, 1), "closed");
    Deal deal2(agent, pool, borrower, 100000000, "USD", Date(2024, 5, 1), Date(2034, 5, 1), "closed");

    // Create a facility and attach it to the deal
    Facility facility(Date(2024, 5, 1), Date(2034, 5, 1), 50000000, "USD", pool, 0.1);

    // Add the facility to the deal
    deal.addFacility(facility);

    // Display deal details
    deal.displayInformation();
    deal2.displayInformation();
    return 0;
}
