#ifndef AGENT_H
#define AGENT_H

#include "Lender.h"

class Agent : public Lender {
public:
    // Constructors and Destructor
    Agent(const std::string& name);
    virtual ~Agent();
};

#endif // AGENT_H
