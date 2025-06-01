#include <gtest/gtest.h>
#include "weapon.hpp"
TEST(WeaponTest, Knife) { Knife k; EXPECT_EQ(k.Name(), "Knife"); }
TEST(WeaponTest, Gun) { Gun g; EXPECT_EQ(g.Name(), "Gun"); }
TEST(WeaponTest, Missile) { Missile m; EXPECT_EQ(m.Name(), "Missile"); }
