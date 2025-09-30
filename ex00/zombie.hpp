#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string name);
		~Zombie()
		{
			std::cout << "the destructor made his job succefully" << this->name << std::endl;
		}
		void announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
