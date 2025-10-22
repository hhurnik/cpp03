#include "ClapTrap.hpp"

/*When ClapTrap attacks, it causes its target to lose <attack damage> hit points.
When ClapTrap repairs itself, it regains <amount> hit points. Attacking and repairing
each cost 1 energy point. Of course, ClapTrap can’t do anything if it has no hit points or
energy points left. However, since these exercises serve as an introduction, the ClapTrap
instances should not interact directly with one another, and the parameters will not refer
to another instance of ClapTrap.*/

/*In all of these member functions, you need to print a message to describe what happens. 
For example, the attack() function may display something like (of course, without
the angle brackets):
ClapTrap <name> attacks <target>, causing <damage> points of damage!*/

ClapTrap::ClapTrap() : name("Some Default Name"), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "Constructor with name parameter called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}
//copy assignment operator
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        //this->name = other.getName();
        this->name = other.name;
        this->hit_points = other.hit_points;
        this->energy_points = other.energy_points;
        this->attack_damage = other.attack_damage;

    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}


void ClapTrap::attack(const std::string &target)
{
    if (hit_points <= 0)
    {
        std::cout << "ClapTrap " << name << " cannot attack because it has no hit points!" << std::endl;
        return;
    }
    if (energy_points <= 0)
    {
        std::cout << "ClapTrap " << name << " has no energy left to attack!" << std::endl;
        return;
    }

    std::cout << "ClapTrap " << name << " attacks " << target
              << ", causing " << attack_damage << " points of damage!" << std::endl;
    energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points <= 0)
    {
        std::cout << "ClapTrap " << name << " is already destroyed!" << std::endl;
        return;
    }

    hit_points -= amount;
    if (hit_points < 0)
        hit_points = 0;

    std::cout << "ClapTrap " << name << " takes " << amount
              << " damage. Hit points left: " << hit_points << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_points <= 0)
    {
        std::cout << "ClapTrap " << name << " cannot repair because it is destroyed!" << std::endl;
        return;
    }
    if (energy_points <= 0)
    {
        std::cout << "ClapTrap " << name << " has no energy left to repair!" << std::endl;
        return;
    }

    hit_points += amount;
    energy_points--;

    std::cout << "ClapTrap " << name << " repairs itself, gaining " << amount
              << " hit points. Total HP: " << hit_points << std::endl;
}



































































// std::string ClapTrap::getName(void) const
// {
//     std::cout << "getName member function called" << std::endl;
//     return (this->name);
// }

// int ClapTrap::getHitPoints(void) const
// {
//     std::cout << "getHitPoints member function called" << std::endl;
//     return (this->hit_points);
// }

// int ClapTrap::getEnergyPoints(void) const
// {
//     std::cout << "getEnergyPoints member function called" << std::endl;
//     return (this->energy_points);
// }

// int ClapTrap::getAttackDamage(void) const
// {
//     std::cout << "getAttackDamage member function called" << std::endl;
//     return (this->attack_damage);
// }
