#include "Company.h"

// Constructors and Destructor
Company::Company() : name("") {}

Company::Company(const std::string& name) : name(name) {}

Company::~Company() {}

// Getters and Setters
std::string Company::getName() const {
    return name;
}

void Company::setName(const std::string& name) {
    this->name = name;
}
