#include "Deal.h"
#include <sstream>
#include <iomanip>
#include <iostream>

// Initialize the static contract counter
int Deal::contractCounter = 0;

// Constructor
Deal::Deal(const Agent& agent, const std::vector<Lender>& pool,
           const Borrower& borrower, double projectAmount, const std::string& currency,
           const Date& startDate, const Date& endDate, const std::string& status)
        : agent(agent), pool(pool), borrower(borrower), projectAmount(projectAmount), currency(currency),
          startDate(startDate), endDate(endDate), status(status) {
    contractNumber = generateContractNumber();
}

// Destructor
Deal::~Deal() {}

// Getters
std::string Deal::getContractNumber() const {
    return contractNumber;
}

const Agent& Deal::getAgent() const {
    return agent;
}

const std::vector<Lender>& Deal::getPool() const {
    return pool;
}

const Borrower& Deal::getBorrower() const {
    return borrower;
}

double Deal::getProjectAmount() const {
    return projectAmount;
}

std::string Deal::getCurrency() const {
    return currency;
}

Date Deal::getStartDate() const {
    return startDate;
}

Date Deal::getEndDate() const {
    return endDate;
}

std::string Deal::getStatus() const {
    return status;
}

// Setters
void Deal::setProjectAmount(double projectAmount) {
    this->projectAmount = projectAmount;
}

void Deal::setCurrency(const std::string& currency) {
    this->currency = currency;
}

void Deal::setStartDate(const Date& startDate) {
    this->startDate = startDate;
}

void Deal::setEndDate(const Date& endDate) {
    this->endDate = endDate;
}

void Deal::setStatus(const std::string& status) {
    this->status = status;
}

// Method to add a facility
void Deal::addFacility(const Facility& facility) {
    facilities.push_back(facility);
}

std::vector<Facility>& Deal::getFacilities() {
    return facilities;
}

// Method to generate the next contract number
std::string Deal::generateContractNumber() {
    ++contractCounter; // Increment the counter

    std::ostringstream oss;
    oss << "S" << std::setw(4) << std::setfill('0') << contractCounter;

    return oss.str();
}

void Deal::displayInformation() {
    std::cout << "********* Contract Number: " << contractNumber << " *********" << std::endl;
    std::cout << "Contract Number: " << contractNumber << std::endl;
    std::cout << "Agent: " << getAgent().getName() << std::endl;
    std::cout << "Borrower: " << getBorrower().getName() << std::endl;
    std::cout << "Project Amount: " << getProjectAmount() << std::endl;
    std::cout << "Currency: " << getCurrency() << std::endl;
    std::cout << "Start Date: " << getStartDate() << std::endl;
    std::cout << "End Date: " << getEndDate() << std::endl;
    std::cout << "Status: " << getStatus() << std::endl;

    std::cout << "Lenders participating in the Deal: ";
    for (const auto& lender : getPool()) {
        std::cout << lender.getName() << " ";
    }
    std::cout << std::endl;

    for (size_t i = 0; i < getFacilities().size(); i++) {
        std::cout << " ***** Facility ID = " << i + 1 << " *****" << std::endl;
        getFacilities()[i].displayInformation();
    }
}
