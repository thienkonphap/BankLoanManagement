#include "Facility.h"

// Constructors and Destructor
Facility::Facility(const Date& startDate, const Date& endDate, double amount, const std::string& currency,
                   const std::vector<Lender>& lenders, const double interest)
    : startDate(startDate), endDate(endDate), amount(amount), currency(currency), lenders(lenders), interest(interest), status("BLOCKED") {}

Facility::~Facility() {}

// Getters and Setters
Date Facility::getStartDate() const {
    return startDate;
}

void Facility::setStartDate(const Date& startDate) {
    this->startDate = startDate;
}

Date Facility::getEndDate() const {
    return endDate;
}

void Facility::setEndDate(const Date& endDate) {
    this->endDate = endDate;
}

double Facility::getAmount() const {
    return amount;
}

void Facility::setAmount(double amount) {
    this->amount = amount;
}

std::string Facility::getCurrency() const {
    return currency;
}

void Facility::setCurrency(const std::string& currency) {
    this->currency = currency;
}

double Facility::getInterest() const {
    return interest;
}

std::vector<Lender> Facility::getLenders() const {
    return lenders;
}

void Facility::addLender(const Lender& lender) {
    lenders.push_back(lender);
}

void Facility::setStatus(const std::string& status) {
    this->status = status;
}

std::string Facility:: getStatus() const {
    return status;
}

void Facility::displayInformation() const{
    std::cout << " ***** Facility Start Date: " << getStartDate() << std::endl;
    std::cout << " ***** Facility End Date: " << getEndDate() << std::endl;
    std::cout << " ***** Facility Amount: " << getAmount() << std::endl;
    std::cout << " ***** Facility Currency: " << getCurrency() << std::endl;
    std::cout << " ***** Facility Interest: " << getInterest() << std::endl;
    std::cout << " ***** Facility Status: " << getStatus() << std::endl;

    std::cout << " ***** Lenders participate in Facility: ";
    for (const auto& lender : getLenders()) {
        std::cout << lender.getName() << " ";
    }
    std::cout << std::endl;
}

std::vector<Part> Facility::getParts() const {
    return parts;
}

void Facility::addPart(const Part& part) {
    parts.push_back(part);
}