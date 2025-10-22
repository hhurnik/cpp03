#include "ScavTrap.hpp"

//these fields are protected so ScavTrap can modify them in the constructor body
//but it cannot initialize them in the initializer list
//inheritance-->calling the base class constructor to initialize the base class’s fields (ClapTrap(name))
//could be with default claptrap constructor as well, if name inside of the body
ScavTrap::ScavTrap() : ClapTrap("Some Default Name")
{
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    std::cout << "ScavTrap " << this->name << " constructed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other) //it calls copy constructor from claptrap
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);

        //i don't copy anything else, because ScavTrap doesn't have its own fields
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (hit_points <= 0) {
        std::cout << "ScavTrap " << name << " can't attack, no HP left!" << std::endl;
        return;
    }
    if (energy_points <= 0) {
        std::cout << "ScavTrap " << name << " has no energy!" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << name << " fiercely attacks " 
              << target << ", causing " << attack_damage << " points of damage!" << std::endl;
    energy_points--;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate Keeper mode!" << std::endl;
}