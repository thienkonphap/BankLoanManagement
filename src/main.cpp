#include <iostream>
#include <string>
#include "Lender.h"
#include "Borrower.h"
#include "Agent.h"
#include "Date.h"
#include "Facility.h"
#include "Deal.h"
#include "Part.h"
#include "Portfolio.h"

using namespace std;
void showMainMenu();
void showDealMenu();
void seeAllDeals();
void createDeal();
void seeAllBorrowers();
void createBorrower();
void borrowerMenu();
void createFacility(int dealIndex);
void showAllLenders();
void showLenderMenu();
void createLender();
void getDealDetail();
// Global vectors to store object
std::vector<Deal> deals;
std::vector<Lender> lenders;
std::vector<Borrower> borrowers;


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
    deals.push_back((deal));
    // Create a facility and attach it to the deal
    Facility facility(Date(2024, 5, 1), Date(2034, 5, 1), 50000000, "USD", pool, 0.1);

    // Add the facility to the deal
    deal.addFacility(facility);

    // Display deal details
    deal.displayInformation();
    deal2.displayInformation();

    std::cout << "Test" << std::endl;
    // Create a Part
    Part part(1000.0);

    // Show the amount and date of the part
    std::cout << "Amount: " << part.getAmount() << ", Date: " << part.getDate() << std::endl;

    // Add part in facility
    facility.addPart(part);

    std::cout << "Facility Parts: " << facility.getParts()[0].getDate() << std::endl;

    showMainMenu();
    return 0;
}

void showMainMenu() {
    int choice;
    do {
        std::cout << "Main Menu:\n";
        std::cout << "1. Deal\n";
        std::cout << "2. Lender\n";
        std::cout << "3. Borrower\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        switch (choice) {
            case 1:
                showDealMenu();
                break;
            case 2:
                showLenderMenu();
                break;
            case 3:
                borrowerMenu();
                break;
            case 4:
                std::cout << "Exiting...\n";
            break;
            default:
                std::cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 4);
}
void showDealMenu() {
    int choice;
    do {
        std::cout << "Deal Menu:\n";
        std::cout << "1.1 See all deals\n";
        std::cout << "1.2 Create a deal\n";
        std::cout << "1.3 See a deal detail\n";
        std::cout << "1.4 Back to main menu\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        switch (choice) {
            case 1:
                seeAllDeals();
                break;
            case 2:
                createDeal();
                break;
            case 3:
                getDealDetail();
                break;
            case 4:
                return;
            default:
                std::cout << "Invalid choice, please try again.\n";
        }
    } while (true);
}
void seeAllDeals() {
    std::cout << "All Deals:\n";
    for (const auto& deal : deals) {
        deal.displayInformation();
    }
}
void createDeal() {
    string agentName, borrowerName, currency, status;
    double projectAmount;
    int startYear, startMonth, startDay, endYear, endMonth, endDay;

    std::cout << "Enter agent name: ";
    getline(cin >> ws, agentName);
    Agent agent(agentName);

    std::cout << "Enter borrower name: ";
    getline(cin, borrowerName);
    Borrower borrower(borrowerName);

    std::cout << "Enter project amount: ";
    std::cin >> projectAmount;

    std::cout << "Enter currency: ";
    std::cin.ignore();
    getline(cin, currency);


    std::cout << "Enter start date (YYYY MM DD): ";
    std::cin >> startYear >> startMonth >> startDay;
    Date startDate(startYear, startMonth, startDay);

    std::cout << "Enter end date (YYYY MM DD): ";
    std::cin >> endYear >> endMonth >> endDay;
    Date endDate(endYear, endMonth, endDay);

    std::cout << "Enter status: ";
    std::cin.ignore();
    std::getline(std::cin, status);

    std::vector<Lender> lenderPool;
    Deal createDealtmp(agent, lenderPool, borrower, projectAmount, currency, startDate, endDate, status);
    deals.push_back(createDealtmp);

    std::cout << "Deal created successfully.\n";
}

void borrowerMenu() {
    int choice;
    do {
        std::cout << "Borrower Menu:\n";
        std::cout << "3.1 See all borrowers\n";
        std::cout << "3.2 Create a borrower\n";
        std::cout << "3.3 Back to main menu\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        switch (choice) {
            case 1:
                seeAllBorrowers();
            break;
            case 2:
                createBorrower();
            break;
            case 3:
                return;
            default:
                std::cout << "Invalid choice, please try again.\n";
        }
    } while (true);
}
void seeAllBorrowers() {
    std::cout << "All Borrowers:\n";
    for (const auto& borrower : borrowers) {
        std::cout << "Borrower: " << borrower.getName() << std::endl;
    }
}
void createBorrower() {
    std::string borrowerName;
    std::cout << "Enter borrower name: ";
    std::cin.ignore();
    std::getline(std::cin, borrowerName);
    Borrower borrower(borrowerName);
    borrowers.push_back(borrower);
    std::cout << "Borrower created successfully.\n";
}
void createFacility(int dealIndex) {
    double amount;
    double interest;
    std::string currency;
    int startYear, startMonth, startDay, endYear, endMonth, endDay;
    std::string statusChoice;

    Deal& deal = deals[dealIndex-1];
    std::cout << "Enter facility amount: ";
    std::cin >> amount;

    std::cout << "Enter interest: ";
    std::cin >> interest;

    std::cout << "Enter currency: ";
    std::cin.ignore();
    std::getline(std::cin, currency);

    std::cout << "Enter start date (YYYY MM DD): ";
    std::cin >> startYear >> startMonth >> startDay;
    Date startDate(startYear, startMonth, startDay);

    std::cout << "Enter end date (YYYY MM DD): ";
    std::cin >> endYear >> endMonth >> endDay;
    Date endDate(endYear, endMonth, endDay);

    std::cout << "Enter status : ";
    std::cin.ignore();
    std::getline(std::cin, statusChoice);

    std::vector<Lender> lenderList;
    char addLender;
    do {
        string lenderName;
        std::cout << "Enter Lender Name: ";
        std::getline(std::cin >> ws, lenderName);
        Lender lenderTmp(lenderName);
        bool isLenderExist = false;
        for (size_t i =0; i<lenders.size(); i++) {
            if(lenders[i].getName() == lenderName) {
                isLenderExist = true;
                lenderList.push_back(lenders[i]);

            }
        }
        if (isLenderExist == false) {
            Lender lenderTmp(lenderName);
            lenders.push_back(lenderTmp);
            lenderList.push_back(lenderTmp);
        }
        cout << "Add another lender to this facility? (y/n): ";
        cin >> addLender;
        std::cin.ignore();
    } while (addLender == 'y');
    Facility facility(startDate, endDate, amount, currency, lenderList, interest);
    deal.addFacility(facility);
    cout << "Faicility created successfully" << std::endl;
    deal.displayInformation();
}
void showLenderMenu() {
    int choice;
    do {
        std::cout << "Lender Menu:\n";
        std::cout << "3.1 See all lenders\n";
        std::cout << "3.2 Create a lender\n";
        std::cout << "3.3 Back to main menu\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        switch (choice) {
            case 1:
                showAllLenders();
            break;
            case 2:
                createLender();
            break;
            case 3:
                return;
            default:
                std::cout << "Invalid choice, please try again.\n";
        }
    } while (true);
}
void showAllLenders() {
    for (size_t i = 0 ; i < lenders.size(); i++) {
        cout << "Lender " << i + 1 << " :" <<lenders[i].getName() << std::endl;
    }
}
void createLender() {
    std::string lenderName;
    cout << "Enter lender name: ";
    std::cin.ignore();
    std::getline(std::cin, lenderName);
    Lender lenderTmp(lenderName);
    lenders.push_back(lenderTmp);
}
void getDealDetail() {
    int dealIndex;
    cout << "Enter index Deal (number in Deal's contract number): ";
    std::cin >> dealIndex;
    Deal& dealByIndex = deals[dealIndex-1];
    dealByIndex.displayInformation();

    int choice;
    do {
        std::cout << "Option for contract number: " << dealByIndex.getContractNumber() << std::endl;
        std::cout << "3.1 Add Facility\n";
        std::cout << "3.2 Add Part to Facility\n";
        std::cout << "3.3 Back to main menu\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        switch (choice) {
            case 1:
                createFacility(dealIndex);
            break;
            case 2:
            break;
            case 3:
                return;
            default:
                std::cout << "Invalid choice, please try again.\n";
        }
    } while (true);
}