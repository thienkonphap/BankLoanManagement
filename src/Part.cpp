#include "Part.h"

// Helper function to get the current date
Date Part::getCurrentDate() {
    auto now = std::chrono::system_clock::now();
    std::time_t now_time = std::chrono::system_clock::to_time_t(now);
    std::tm* current_time = std::localtime(&now_time);
    return Date(current_time->tm_year + 1900, current_time->tm_mon + 1, current_time->tm_mday);
}

// Constructors
Part::Part(double amount) : amount(amount), date(getCurrentDate()) {}

Part::Part(double amount, const Date& date) : amount(amount), date(date) {}

// Getters
double Part::getAmount() const {
    return amount;
}

Date Part::getDate() const {
    return date;
}
