#ifndef DEAL_H
#define DEAL_H

#include <string>
#include <vector>
#include "Agent.h"
#include "Borrower.h"
#include "Date.h"
#include "Lender.h"

class Facility;

class Deal {
public:
    // Constructors and Destructor
    Deal(const Agent& agent, const std::vector<Lender>& pool,
         const Borrower& borrower, double projectAmount, const std::string& currency,
         const Date& startDate, const Date& endDate, const std::string& status);
    ~Deal();

    // Getters and Setters
    std::string getContractNumber() const;

    const Agent& getAgent() const;

    std::vector<Lender> getPool() const;

    const Borrower& getBorrower() const;

    double getProjectAmount() const;
    void setProjectAmount(double projectAmount);

    std::string getCurrency() const;
    void setCurrency(const std::string& currency);

    Date getStartDate() const;
    void setStartDate(const Date& startDate);

    Date getEndDate() const;
    void setEndDate(const Date& endDate);

    std::string getStatus() const;
    void setStatus(const std::string& status);

    // Methods to manage facilities
    void addFacility(const Facility& facility);
    std::vector<Facility> getFacilities() const;
    void displayInformation() const;

private:
    static int contractCounter; // Static variable to keep track of the contract numbers

    std::string contractNumber;
    const Agent& agent;
    std::vector<Lender> pool;
    const Borrower& borrower;
    double projectAmount;
    std::string currency;
    Date startDate;
    Date endDate;
    std::string status;
    std::vector<Facility> facilities;

    std::string generateContractNumber(); // Method to generate the next contract number
};

#endif // DEAL_H
