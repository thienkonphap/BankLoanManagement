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
