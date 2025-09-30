#include "HumanA.hpp"

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

HumanA::HumanA(std::string name ,Weapon& sla7)
{
	this->name = name;
	this->weapon = &sla7;
}
