#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
//ScavTrap inherits every atribute from ClapTrap (name, hit_points, energy_points, attack_damage)

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &other);
        ScavTrap &operator=(const ScavTrap &other);
        ~ScavTrap();

        void attack(const std::string& target);
        void guardGate();
};


#endif