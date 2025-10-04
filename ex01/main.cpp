#include "zombie.hpp"


int main(void)
{
	Zombie *zombies = zombieHorde(4, "badr");

	if (!zombies)
		return 1;
	int i = 0;
	while (i < 4)
	{
		zombies[i].announce();
		i++;
	}
	delete[] zombies;
	return 0;
}
