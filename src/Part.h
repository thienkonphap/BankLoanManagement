#ifndef PROJET_PART_H
#define PROJET_PART_H

#include <string>

class Part {
public:
    // Constructors and Destructor
    Part();
    Part(double amount);

    double getAmount() const;

private:
    double amount;
};

#endif //PART_H
