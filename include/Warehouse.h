#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include "Container.h"
#include <vector>

class Warehouse {
public:
    Warehouse();
    void displayContents() const;

private:
    std::vector<Container> containers;
};

#endif  // WAREHOUSE_H
