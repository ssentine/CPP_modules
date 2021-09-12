# include "Character.hpp"

int Character::index = 0;
	
Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(Character const & theCharacter)
{
	*this = theCharacter;
}

Character::~Character()
{
	for (int i = 0; i < index; i++)
		delete inventory[i];
}

Character &	Character::operator = (Character const & other)
{
	if (this != & other)
	{
		_name = other._name;
		for (int i = 0; i < 4; i++)
			inventory[i] = other.inventory[i];
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	if (index > 3)
		return ;
	inventory[index] = m;
	index++;
}

void	Character::unequip(int idx)
{
	if (idx > index || idx < 0 || !inventory[idx])
		return ;
	inventory[idx] = NULL;
	index--;
	for (int i = idx; i < 3; i++)
		inventory[i] = inventory[i + 1];
 }

void	Character::use(int idx, ICharacter& target)
{
	if (idx > index || idx < 0 || !inventory[idx])
		return ;
	inventory[idx]->use(target);
}
