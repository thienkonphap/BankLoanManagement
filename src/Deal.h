#ifndef DEAL_H
#define DEAL_H

#include <string>
#include <vector>
#include "Agent.h"
#include "Borrower.h"
#include "Date.h"
#include "Lender.h"
#include "Facility.h"

class Deal {
public:
    // Constructors and Destructor
    Deal(const Agent& agent, const std::vector<Lender>& pool,
         const Borrower& borrower, double projectAmount, const std::string& currency,
         const Date& startDate, const Date& endDate, const std::string& status);
    ~Deal();

    // Getters
    std::string getContractNumber() const;
    const Agent& getAgent() const;
    const std::vector<Lender>& getPool() const;
    const Borrower& getBorrower() const;
    double getProjectAmount() const;
    std::string getCurrency() const;
    Date getStartDate() const;
    Date getEndDate() const;
    std::string getStatus() const;

    // Setters
    void setProjectAmount(double projectAmount);
    void setCurrency(const std::string& currency);
    void setStartDate(const Date& startDate);
    void setEndDate(const Date& endDate);
    void setStatus(const std::string& status);

    // Methods to manage facilities
    void addFacility(const Facility& facility);
    std::vector<Facility>& getFacilities();
    void displayInformation();

private:
    static int contractCounter; // Static variable to keep track of the contract numbers

    std::string contractNumber;
    Agent agent;
    std::vector<Lender> pool;
    Borrower borrower;
    double projectAmount;
    std::string currency;
    Date startDate;
    Date endDate;
    std::string status;
    std::vector<Facility> facilities;

    std::string generateContractNumber(); // Method to generate the next contract number
};

#endif // DEAL_H
