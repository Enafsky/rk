#pragma once
#include <string>
struct Vehicle { virtual ~Vehicle() = default; virtual std::string Name() const = 0; };
struct Horse : public Vehicle { std::string Name() const override { return "Horse"; } };
struct Tank : public Vehicle { std::string Name() const override { return "Tank"; } };
struct Spaceship : public Vehicle { std::string Name() const override { return "Spaceship"; } };
