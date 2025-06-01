#pragma once
#include <string>
struct Weapon { virtual ~Weapon() = default; virtual std::string Name() const = 0; };
struct Knife : public Weapon { std::string Name() const override { return "Knife"; } };
struct Gun : public Weapon { std::string Name() const override { return "Gun"; } };
struct Missile : public Weapon { std::string Name() const override { return "Missile"; } };
