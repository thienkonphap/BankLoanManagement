#include "Facility.h"
#include <iostream>

// Constructors and Destructor
Facility::Facility(const Date& startDate, const Date& endDate, double amount, const std::string& currency,
                   const std::vector<Lender>& lenders, double interest)
        : startDate(startDate), endDate(endDate), amount(amount), currency(currency), lenders(lenders), interest(interest), status("BLOCKED") {}

Facility::~Facility() {}

// Getters
Date Facility::getStartDate() const {
    return startDate;
}

Date Facility::getEndDate() const {
    return endDate;
}

double Facility::getAmount() const {
    return amount;
}

std::string Facility::getCurrency() const {
    return currency;
}

double Facility::getInterest() const {
    return interest;
}

std::string Facility::getStatus() const {
    return status;
}

const std::vector<Lender>& Facility::getLenders() const {
    return lenders;
}

const std::vector<Part>& Facility::getParts() const {
    return parts;
}

// Setters
void Facility::setStartDate(const Date& startDate) {
    this->startDate = startDate;
}

void Facility::setEndDate(const Date& endDate) {
    this->endDate = endDate;
}

void Facility::setAmount(double amount) {
    this->amount = amount;
}

void Facility::setCurrency(const std::string& currency) {
    this->currency = currency;
}

void Facility::setStatus(const std::string& status) {
    this->status = status;
}

// Methods to manage lenders and parts
void Facility::addLender(const Lender& lender) {
    lenders.push_back(lender);
}

void Facility::addPart(const Part& part) {
    parts.push_back(part);
}

// Method to display information
void Facility::displayInformation() const {
    std::cout << "***** Facility Information *****" << std::endl;
    std::cout << "Start Date: " << getStartDate() << std::endl;
    std::cout << "End Date: " << getEndDate() << std::endl;
    std::cout << "Amount: " << getAmount() << std::endl;
    std::cout << "Currency: " << getCurrency() << std::endl;
    std::cout << "Interest: " << getInterest() << std::endl;
    std::cout << "Status: " << getStatus() << std::endl;

    std::cout << "Lenders participating in Facility: ";
    for (const auto& lender : getLenders()) {
        std::cout << lender.getName() << " ";
    }
    std::cout << std::endl;
}
