#ifndef FORKLIFT_H
#define FORKLIFT_H


#include <IStorageSystem.h>

class Forklift: public IStorageSystem {

public:

    Forklift() = default;
    virtual ~Forklift() = default;


    bool canHandleContainer(const Container &container) ;
    void display() ;

private:
    int m_maxWeight =  50000;
    int m_maxVolume = 1000;
};


#endif  // FORKLIFT_H