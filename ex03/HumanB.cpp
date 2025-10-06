#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
	this->weapon = NULL;
	this->name = name;
}


void HumanB::attack()
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << "there is no weapon " << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}
