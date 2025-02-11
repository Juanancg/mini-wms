#include "Warehouse.h"
#include <iostream>

Warehouse::Warehouse() {
    containers.push_back(Container("Box", 2.0, 2.0, 2.0, 20.0));
    containers.push_back(Container("Pallet", 5.0, 5.0, 5.0, 100.0));
}

void Warehouse::displayContents() const {
    std::cout << "Warehouse contains:\n";
    for (const auto& container : containers) {
        container.display();
    }
}


void Warehouse::addStorageSystem(std::unique_ptr<IStorageSystem> newStorage)
{
    if (newStorage)
    {
        storages.push_back(std::move(newStorage));
    }
}

void Warehouse::displayStorageSystems() const
{
    std::cout << "Warehouse Storages:\n";
    for (const auto& storage : storages) {
        if (storage)
            storage->display();
    }
}