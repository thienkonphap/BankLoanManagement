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
    Facility(const Date& startDate, const Date& endDate, double amount, const std::string& currency, const std::vector<Lender>& lenders,
            double interest);
    ~Facility();

    // Getters and Setters
    Date getStartDate() const;
    void setStartDate(const Date& startDate);

    Date getEndDate() const;
    void setEndDate(const Date& endDate);

    double getAmount() const;
    void setAmount(double amount);

    std::string getCurrency() const;
    void setCurrency(const std::string& currency);

    std::vector<Lender> getLenders() const;
    void addLender(const Lender& lender);
    void displayInformation() const;
    double getInterest() const;
    void setStatus(const std::string& status);
    std::string getStatus() const;
    std::vector<Part> getParts() const;
    void addPart(const Part& part);

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
