#ifndef DATE_H
#define DATE_H

#include <string>
#include <iostream>

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

    // Overload the stream insertion operator for easy printing
    friend std::ostream& operator<<(std::ostream& os, const Date& date);

private:
    int year;
    int month;
    int day;
};

#endif // DATE_H
