#include <gtest/gtest.h>
#include "vehicle.hpp"
TEST(VehicleTest, Horse) { Horse v; EXPECT_EQ(v.Name(), "Horse"); }
TEST(VehicleTest, Tank) { Tank v; EXPECT_EQ(v.Name(), "Tank"); }
TEST(VehicleTest, Spaceship) { Spaceship v; EXPECT_EQ(v.Name(), "Spaceship"); }
