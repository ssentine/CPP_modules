#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template<typename T>
uintptr_t easyfind(T & container, int n)
{
	typename T::iterator pos = std::find(container.begin(), container.end(), n);
	if (pos == container.end())
		throw std::range_error("No such number in the container!");
	return (*pos);
}

#endif
