#include "zombie.hpp"


Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombieHorde = new Zombie[N];

	int i = 0;
	while (i < N)
	{
		zombieHorde[i].set_name(name);
		i++;
	}
	return (zombieHorde);
}
