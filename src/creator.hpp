#pragma once
#include "weapon.hpp"
#include "vehicle.hpp"
#include <memory>
struct WeaponCreator {
    virtual ~WeaponCreator() = default;
    virtual std::unique_ptr<Weapon> MakeWeapon() const = 0;
};
struct KnifeCreator : WeaponCreator {
    std::unique_ptr<Weapon> MakeWeapon() const override { return std::make_unique<Knife>(); }
};
struct GunCreator : WeaponCreator {
    std::unique_ptr<Weapon> MakeWeapon() const override { return std::make_unique<Gun>(); }
};
struct MissileCreator : WeaponCreator {
    std::unique_ptr<Weapon> MakeWeapon() const override { return std::make_unique<Missile>(); }
};
struct VehicleCreator {
    virtual ~VehicleCreator() = default;
    virtual std::unique_ptr<Vehicle> MakeVehicle() const = 0;
};
struct HorseCreator : VehicleCreator {
    std::unique_ptr<Vehicle> MakeVehicle() const override { return std::make_unique<Horse>(); }
};
struct TankCreator : VehicleCreator {
    std::unique_ptr<Vehicle> MakeVehicle() const override { return std::make_unique<Tank>(); }
};
struct SpaceshipCreator : VehicleCreator {
    std::unique_ptr<Vehicle> MakeVehicle() const override { return std::make_unique<Spaceship>(); }
};
