#ifndef CONVEYOR_H
#define CONVEYOR_H


#include <IStorageSystem.h>

class Conveyor: public IStorageSystem {

public:

    Conveyor() = default;
    virtual ~Conveyor() = default;

    bool canHandleContainer(const Container &container) ;
    void display() ;

private:
    double m_maxWidth = 10.5;
    double m_maxHeight =  20.0;
    double m_maxLength = 30.0;
};


#endif  // CONVEYOR_H