#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
//ScavTrap inherits every atribute from ClapTrap (name, hit_points, energy_points, attack_damage)

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &other);
        FragTrap &operator=(const FragTrap &other);
        ~FragTrap();

        void attack(const std::string& target);
        void highFivesGuys(void);
};


#endif