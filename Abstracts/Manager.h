// Manager.h
#ifndef Manager_H
#define Manager_H

#include <vector>

class Manager
{
public:
    // Pure virtual methods for the base manager
    virtual void init() = 0;
    virtual void update() = 0;
    virtual void shutdown() = 0;
};

#endif
