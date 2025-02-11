#ifndef ISTORAGESYSTEM_H
#define ISTORAGESYSTEM_H


#include <Container.h>

class IStorageSystem {

public:
    virtual ~IStorageSystem() = default;
    virtual bool canHandleContainer(const Container &container) = 0;
    virtual void display() = 0;
};


#endif  // ISTORAGESYSTEM_H