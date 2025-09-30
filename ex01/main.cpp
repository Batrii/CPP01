#include "zombie.hpp"


int main(void)
{
	Zombie *zombies = zombieHorde(2, "badr");

	int i = 0;
	while (i < 2)
	{
		zombies[i].announce();
		i++;
	}
	return 0;
}
