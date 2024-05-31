#include <iostream>
#include "Agent.h"
#include "Borrower.h"
#include "Date.h"
#include "Facility.h"
#include "Deal.h"
#include "Part.h"
#include "Portfolio.h" // Ajout de l'inclusion pour Portfolio

int main() {
    // Create an agent
    Agent agent("Main Agent");

    // Create a borrower
    Borrower borrower("Example Borrower");

    // Create a lender pool
    std::vector<Lender> pool = {
            Lender("Bank A"),
            Lender("Bank B"),
            Lender("Bank C")
    };

    // Create a deal
    Deal deal(agent, pool, borrower, 1000000, "USD", Date(2024, 1, 1), Date(2025, 1, 1), "open");

    // Create two facilities
    Facility facility1(Date(2024, 1, 1), Date(2024, 6, 1), 500000, "USD", pool, 0.08);
    Facility facility2(Date(2024, 1, 1), Date(2024, 6, 1), 500000, "USD", pool, 0.08);

    // Add parts to facility1
    facility1.addPart(Part(250000));
    facility1.addPart(Part(250000, Date(2024, 3, 15))); // Specify a custom date for this part

    // Add parts to facility2
    facility2.addPart(Part(300000, Date(2024, 2, 20))); // Specify a custom date for this part
    facility2.addPart(Part(200000));

    // Add facilities to the deal
    deal.addFacility(facility1);
    deal.addFacility(facility2);

    // Create a portfolio
    Portfolio portfolio;

    // Add facilities to the portfolio
    portfolio.addFacility(facility1);
    portfolio.addFacility(facility2);

    // Display total interest
    std::cout << "Total Interest: " << portfolio.getTotalInterest() << std::endl;

    return 0;
}
