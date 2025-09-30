#include "zombie.hpp"


int main(void)
{
	Zombie *zombies = zombieHorde(4, "badr");

	int i = 0;
	while (i < 4)
	{
		zombies[i].announce();
		i++;
	}
	return 0;
}
