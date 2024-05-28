#include "Borrower.h"

// Constructors and Destructor
Borrower::Borrower() : name("") {}

Borrower::Borrower(const std::string& name)
    : name(name) {}

Borrower::~Borrower() {}

// Getters and Setters
std::string Borrower::getName() const {
    return name;
}

void Borrower::setName(const std::string& name) {
    this->name = name;
}
