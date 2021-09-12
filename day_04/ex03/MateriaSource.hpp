
#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <iostream>
# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
public:
	AMateria * materia[4];
	static int index;
	
	MateriaSource();
	MateriaSource(MateriaSource const & materia);
	virtual	~MateriaSource();

	MateriaSource &	operator = (MateriaSource const & other);
	
	virtual void		learnMateria(AMateria*);
	virtual AMateria* 	createMateria(std::string const & type);
};

#endif
