#ifndef FACILITY_H
#define FACILITY_H

#include <string>
#include <vector>
#include "Date.h"
#include "Lender.h"
#include "Part.h"

class Facility {
public:
    // Constructors and Destructor
    Facility();
    Facility(const Date& startDate, const Date& endDate, double amount, const std::string& currency,
             const std::vector<Lender>& lenders, double interest);
    ~Facility();

    // Getters
    Date getStartDate() const;
    Date getEndDate() const;
    double getAmount() const;
    std::string getCurrency() const;
    double getInterest() const;
    std::string getStatus() const;
    const std::vector<Lender>& getLenders() const;
    const std::vector<Part>& getParts() const;

    // Setters
    void setStartDate(const Date& startDate);
    void setEndDate(const Date& endDate);
    void setAmount(double amount);
    void setCurrency(const std::string& currency);
    void setStatus(const std::string& status);

    // Methods to manage lenders and parts
    void addLender(const Lender& lender);
    void addPart(const Part& part);
    void displayInformation() const;

private:
    Date startDate;
    Date endDate;
    double amount;
    std::string currency;
    std::vector<Lender> lenders;
    double interest;
    std::string status;
    std::vector<Part> parts;
};

#endif // FACILITY_H
