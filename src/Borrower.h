#ifndef BORROWER_H
#define BORROWER_H

#include "Company.h"

class Borrower : public Company {
public:
    // Constructors and Destructor
    Borrower();
    Borrower(const std::string& name);
    virtual ~Borrower();
};

#endif // BORROWER_H
