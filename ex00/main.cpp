#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap1("Francesco");
    ClapTrap clap2("Maria");

    //i made damage
    clap1.attack("Maria");
    //i took damage
    clap2.takeDamage(5);
    //in real world it would be 0, but i'd like to show how the function works

    clap2.beRepaired(3);

    clap1.attack("Maria");
    clap2.takeDamage(6);

    //copy test
    ClapTrap clap3 = clap1;
    clap3.attack("Hipolit");

    //low energy test
    for (int i = 0; i < 15; i++)
        clap1.attack("target");

    return (0);
}
