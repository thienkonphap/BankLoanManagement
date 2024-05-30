#ifndef BORROWER_H
#define BORROWER_H

#include <string>
#include "Company.h"

#include <memory> // for smart pointers

class Borrower: public Company {
public:
    // Constructors and Destructor
    Borrower();
    Borrower(const std::string& name);
    ~Borrower();

    // Getters and Setters
    std::string getName() const;
    void setName(const std::string& name);


private:
    std::string name;
};

#endif // BORROWER_H
