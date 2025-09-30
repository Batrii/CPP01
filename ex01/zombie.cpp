#include "zombie.hpp"


void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}
Zombie* newZombie( std::string name )
{
	Zombie *s2 = new Zombie(name);

	return (s2);
}
void randomChump( std::string name )
{
	Zombie s1(name);

	s1.announce();
}
