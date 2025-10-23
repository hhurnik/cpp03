#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Francesco");
    scav.attack("target");
    scav.guardGate();

    std::cout << "---- Copy constructor ----" << std::endl;
    ScavTrap copy(scav);

    std::cout << "---- Assignment ----" << std::endl;
    ScavTrap assign;
    assign = scav;

    std::cout << "---- End of program ----" << std::endl;
    return (0);
}
