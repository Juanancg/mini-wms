#include "gtest/gtest.h"
#include "Warehouse.h"
#include "Forklift.h"

TEST(WarehouseTest, AddContainer) {
    Warehouse warehouse;

    testing::internal::CaptureStdout();
    warehouse.displayContents();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Box"), std::string::npos);
    EXPECT_NE(output.find("Pallet"), std::string::npos);
}

TEST(WarehouseTest, ForkliftcanHandleContainer) {

    Forklift forklift;

    Container container("Box", 2.0, 2.0, 2.0, 20.0);

    EXPECT_TRUE(forklift.canHandleContainer(container));
}

TEST(WarehouseTest, ForkliftcanHandleContainerMaxVolume) {

    Forklift forklift;

    Container container("Box", 2000.0, 2000.0, 2000.0, 20.0);

    EXPECT_FALSE(forklift.canHandleContainer(container));
}

TEST(WarehouseTest, ForkliftcanHandleContainerMaxWeight) {

    Forklift forklift;

    Container container("Box", 2.0, 2.0, 2.0, 50001.0);

    EXPECT_FALSE(forklift.canHandleContainer(container));
}
