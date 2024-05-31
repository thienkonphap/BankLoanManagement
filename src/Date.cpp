#include "Date.h"
#include <iomanip>
#include <sstream>

// Default constructor
Date::Date() : year(0), month(0), day(0) {}

// Parameterized constructor
Date::Date(int year, int month, int day) : year(year), month(month), day(day) {}

// Getters and Setters
int Date::getYear() const {
    return year;
}

void Date::setYear(int year) {
    this->year = year;
}

int Date::getMonth() const {
    return month;
}

void Date::setMonth(int month) {
    this->month = month;
}

int Date::getDay() const {
    return day;
}

void Date::setDay(int day) {
    this->day = day;
}

// Convert date to string
std::string Date::toString() const {
    std::ostringstream oss;
    oss << std::setw(4) << std::setfill('0') << year << "-"
        << std::setw(2) << std::setfill('0') << month << "-"
        << std::setw(2) << std::setfill('0') << day;
    return oss.str();
}

// Overload the stream insertion operator
std::ostream& operator<<(std::ostream& os, const Date& date) {
    os << date.toString();
    return os;
}

int Date::differenceInDays(const Date& date) const {
    // Convert both dates to days since the reference date (e.g., January 1, 1900)
    int days1 = this->daysSinceReferenceDate();
    int days2 = date.daysSinceReferenceDate();

    // Calculate the difference in days
    return std::abs(days2 - days1);
}


int Date::daysSinceReferenceDate() const {
    // Define the reference date
    const int referenceYear = 1900;
    const int referenceMonth = 1;
    const int referenceDay = 1;

    // Calculate days since the reference date
    int days = 0;

    // Add days for each year since the reference year
    for (int y = referenceYear; y < year; ++y) {
        days += isLeapYear(y) ? 366 : 365;
    }

    // Add days for each month in the current year
    for (int m = referenceMonth; m < month; ++m) {
        days += daysInMonth(m, year);
    }

    // Add days for the current month
    days += day - referenceDay;

    return days;
}

bool Date::isLeapYear(int year) const {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int Date::daysInMonth(int month, int year) const {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 0; // Invalid month
    }
}

