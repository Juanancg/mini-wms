#include "gtest/gtest.h"
#include "Warehouse.h"

TEST(WarehouseTest, AddContainer) {
    Warehouse warehouse;

    testing::internal::CaptureStdout();
    warehouse.displayContents();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Box"), std::string::npos);
    EXPECT_NE(output.find("Pallet"), std::string::npos);
}
