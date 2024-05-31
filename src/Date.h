#ifndef DATE_H
#define DATE_H

#include <string>
#include <iostream>
#include <cmath>

class Date {
public:
    // Constructors
    Date();
    Date(int year, int month, int day);

    // Getters and Setters
    int getYear() const;
    void setYear(int year);

    int getMonth() const;
    void setMonth(int month);

    int getDay() const;
    void setDay(int day);

    std::string toString() const;

    // Method to calculate the difference in days between two dates
    int differenceInDays(const Date& date) const;

    // Overload the stream insertion operator for easy printing
    friend std::ostream& operator<<(std::ostream& os, const Date& date);

private:
    int year;
    int month;
    int day;

    // Private helper methods
    int daysSinceReferenceDate() const;
    bool isLeapYear(int year) const;
    int daysInMonth(int month, int year) const;
};

#endif // DATE_H