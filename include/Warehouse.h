#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include "Container.h"
#include "IStorageSystem.h"

#include <vector>
#include <memory>

class Warehouse {
public:
    Warehouse();
    void displayContents() const;

    void addStorageSystem(std::unique_ptr<IStorageSystem> newStorage);

    void displayStorageSystems() const;

private:
    std::vector<Container> containers;
    std::vector<std::unique_ptr<IStorageSystem>> storages;
};

#endif  // WAREHOUSE_H
