#include <gtest/gtest.h>
#include "munition_store.hpp"

TEST(MunitionStoreTest, ChangeWeapon) {
    MunitionStore store(std::make_unique<KnifeCreator>(), std::make_unique<HorseCreator>());
    store.ChangeWeaponCreator(std::make_unique<GunCreator>());
    testing::internal::CaptureStdout();
    store.Print();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Gun"), std::string::npos);
}

TEST(MunitionStoreTest, ChangeVehicle) {
    MunitionStore store(std::make_unique<KnifeCreator>(), std::make_unique<HorseCreator>());
    store.ChangeVehicleCreator(std::make_unique<SpaceshipCreator>());
    testing::internal::CaptureStdout();
    store.Print();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Spaceship"), std::string::npos);
}
