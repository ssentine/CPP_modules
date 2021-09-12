#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string _name;

public:
	AMateria * inventory[4];
	static int index;
	
	Character(): _name("name"){}
	Character(std::string name);
	Character(Character const & theCharacter);
	virtual ~Character();

	Character &	operator = (Character const & other);

	virtual std::string const & getName() const;
	virtual void				equip(AMateria* m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter& target);
};

#endif
