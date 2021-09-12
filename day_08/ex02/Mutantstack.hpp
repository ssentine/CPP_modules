#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>

template <typename T>
class Mutantstack : public std::stack<T>
{
private:
	std::stack<T> _stack;
	std::list<T> _list;

public:
	Mutantstack(){std::stack<T> _stack;std::list<T> _list;}
	Mutantstack(Mutantstack const & ms){*this = ms;}
	~Mutantstack(){}

	Mutantstack & operator = (Mutantstack const &) {return (*this);}

	void push(T t)
	{
		_stack.push(t);
		_list.push_back(t);
	}
	void pop()
	{
		_stack.pop();
		_list.pop_back();
	}
	bool empty() const 
	{
		if (_stack.size() == 0)
			return true;
		return false;
	}
	size_t size(){return _stack.size();}
	T const & top(){return _stack.top();}
	typedef typename std::list<T>::iterator iterator;
	iterator begin(){return (_list.begin());}
	iterator end(){return (_list.end());}
};

#endif
