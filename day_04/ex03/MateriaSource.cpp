# include "MateriaSource.hpp"

int MateriaSource::index = 0;

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & aMateria)
{
	*this = aMateria;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < index; i++)
		delete materia[i];
}


MateriaSource &	MateriaSource::operator = (MateriaSource const & other)
{
	if (this != & other)
	{
		for (int i = 0; i < 4; i++)
			materia[i] = other.materia[i];
		index = other.index;
	}
	return (*this);
}
	
void	MateriaSource::learnMateria(AMateria* aMateria)
{
	if (index > 3)
		return ;
	materia[index] = aMateria;
	index++;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
	else
		return (NULL);
}
