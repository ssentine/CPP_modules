#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
public:
	class BadIndex : public std::exception
	{
		virtual const char * what() const throw()
		{
			return "Index is out of the limits";
		}
	};

private:
	unsigned int _size;
	T * _array;

public:
	Array() : _size(1), _array(new T[0]){}
	Array(unsigned int size) : _size (size), _array(new T[size]){}
	Array (Array const & anArray){*this = anArray;}
	~Array() {delete[] _array;}

	unsigned int	size() { return _size;}
	
	Array & operator = (Array const & anArray)
	{
		_size = anArray._size;
		delete [] _array;
		if (_size > 0)
			_array = new T[_size];
		else
			_array = new T();
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = anArray[i];
		return (*this);
	}

	T & operator [] (unsigned int index)
	{
		if (index >= _size)
			throw Array::BadIndex();
		return (_array[index]);
	}
};

#endif
