#include "zombie.hpp"


Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombieHorde = new (std::nothrow) Zombie[N];

	if (!zombieHorde)
	{
		std::cerr << "allocation failed" << std::endl;
		return (NULL);
	}

	int i = 0;
	while (i < N)
	{
		zombieHorde[i].set_name(name);
		i++;
	}
	return (zombieHorde);
}
