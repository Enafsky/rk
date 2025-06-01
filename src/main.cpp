#include "munition_store.hpp"
#include <iostream>
#include <memory>
int main() {
    MunitionStore store(std::make_unique<KnifeCreator>(), std::make_unique<HorseCreator>());
    std::cout << "==== Munition Store ====" << std::endl;
    store.Print();
    store.ChangeWeaponCreator(std::make_unique<GunCreator>());
    store.Print();
    store.ChangeVehicleCreator(std::make_unique<TankCreator>());
    store.Print();
    store.ChangeWeaponCreator(std::make_unique<MissileCreator>());
    store.ChangeVehicleCreator(std::make_unique<SpaceshipCreator>());
    store.Print();
}
