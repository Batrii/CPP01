#include "zombie.hpp"


int main()
{
	// Zombie s("hamid");

	// s.announce();

	Zombie *z1 = newZombie("khalid 1");
	Zombie *z2 = newZombie("khalid 2");
	Zombie *z3 = newZombie("khalid 3");
	Zombie *z4 = newZombie("khalid 4");

	randomChump("hamid 1");
	randomChump("hamid 2");
	randomChump("hamid 3");
	randomChump("hamid 4");

	z1->announce();
	z2->announce();
	z3->announce();
	z4->announce();

	delete z1;
	delete z2;
	delete z3;
	delete z4;
}
