#pragma once
#include "creator.hpp"
#include <memory>
#include <iostream>
class MunitionStore final {
public:
    MunitionStore(std::unique_ptr<WeaponCreator>&& weaponCreator, std::unique_ptr<VehicleCreator>&& vehicleCreator)
        : weaponCreator_(std::move(weaponCreator)), vehicleCreator_(std::move(vehicleCreator)) {}
    void ChangeWeaponCreator(std::unique_ptr<WeaponCreator>&& creator) { weaponCreator_ = std::move(creator); }
    void ChangeVehicleCreator(std::unique_ptr<VehicleCreator>&& creator) { vehicleCreator_ = std::move(creator); }
    void Print() const {
        std::cout << "---- Information ----" << std::endl;
        std::cout << "Weapon  : " << weaponCreator_->MakeWeapon()->Name() << std::endl;
        std::cout << "Vehicle : " << vehicleCreator_->MakeVehicle()->Name() << std::endl;
        std::cout << "---------------------" << std::endl << std::endl;
    }
private:
    std::unique_ptr<WeaponCreator> weaponCreator_;
    std::unique_ptr<VehicleCreator> vehicleCreator_;
};
