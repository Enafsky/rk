#include <gtest/gtest.h>
#include "creator.hpp"

TEST(CreatorTest, KnifeCreator) {
    KnifeCreator creator;
    auto weapon = creator.MakeWeapon();
    EXPECT_EQ(weapon->Name(), "Knife");
}

TEST(CreatorTest, TankCreator) {
    TankCreator creator;
    auto vehicle = creator.MakeVehicle();
    EXPECT_EQ(vehicle->Name(), "Tank");
}
