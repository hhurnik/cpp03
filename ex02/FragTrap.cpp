#include "FragTrap.hpp"

//these fields are protected so FragTrap can modify them in the constructor body
//but it cannot initialize them in the initializer list
//inheritance-->calling the base class constructor to initialize the base class’s fields (ClapTrap(name))
//could be with default claptrap constructor as well, if name inside of the body
FragTrap::FragTrap() : ClapTrap("Some Default Name")
{
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap " << this->name << " constructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other) //it calls copy constructor from claptrap
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
        //i don't copy anything else, because FragTrap doesn't have its own fields
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (hit_points <= 0) {
        std::cout << "FragTrap " << name << " can't attack, no HP left!" << std::endl;
        return;
    }
    if (energy_points <= 0) {
        std::cout << "FragTrap " << name << " has no energy!" << std::endl;
        return;
    }
    std::cout << "FragTrap " << name << " fiercely attacks " 
              << target << ", causing " << attack_damage << " points of damage!" << std::endl;
    energy_points--;
}


void FragTrap::highFivesGuys(void)
{
     std::cout << "Give me a high five!" << std::endl;
}
