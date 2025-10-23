#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "===== Testing FragTrap =====" << std::endl;

    FragTrap frag("Giovanni");
    frag.attack("enemy");
    frag.highFivesGuys();

    std::cout << "---- Copy constructor ----" << std::endl;
    FragTrap fragCopy(frag);

    std::cout << "---- Assignment ----" << std::endl;
    FragTrap fragAssign;
    fragAssign = frag;

    //lets attack - inherited from claptrap
    fragAssign.attack("someone new");
    //fragAssign.takeDamage(5);

    std::cout << "---- End of FragTrap tests ----" << std::endl;

    return (0);
}