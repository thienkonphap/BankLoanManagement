#ifndef COMPANY_H
#define COMPANY_H

#include <string>

class Company {
public:
    // Constructors and Destructor
    Company();
    Company(const std::string& name);
    virtual ~Company();

    // Getters and Setters
    std::string getName() const;
    void setName(const std::string& name);

private:
    std::string name;
};

#endif // COMPANY_H
