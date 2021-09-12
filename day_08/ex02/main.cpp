# include "Mutantstack.hpp"

int main()
{
	Mutantstack<int> mstack;

	mstack.push(2);
	mstack.push(17);

	std::cout << "top = " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size = " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(4);
	mstack.push(5);
	mstack.push(6);
	mstack.push(7);
	mstack.push(8);

	Mutantstack<int>::iterator it = mstack.begin();
	Mutantstack<int>::iterator ite = mstack.end();

	++it;
	--it;

	std::cout << "\nStack:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}