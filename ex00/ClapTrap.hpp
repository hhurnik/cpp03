#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>


class ClapTrap
{
    private:
        std::string name; //passed as a parameter to the constructor
        int hit_points;
        int energy_points;
        int attack_damage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &other);
        ClapTrap &operator=(const ClapTrap &other); //copy assignment operator
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        // std::string getName(void) const;
        // int getHitPoints(void) const;
        // int getEnergyPoints(void) const;
        // int getAttackDamage(void) const;



};





#endif