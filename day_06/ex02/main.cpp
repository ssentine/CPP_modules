# include <iostream>

class Base 
{
public:
	virtual ~Base() {}
};

class A : public Base {} ;
class B : public Base {} ;
class C : public Base {} ;

Base * generate(void)
{
	srand(time(NULL));
	int n = rand();
	if (n % 3 == 0)
	{
		std::cout << "It's A class" << std::endl;
		return (new A());
	}
	else if (n % 3 == 1)
	{
		std::cout << "It's B class" << std::endl;
		return (new B());
	}
	else
	{
		std::cout << "It's C class" << std::endl;
		return (new C());
	}
}

void identify(Base * p)
{
	A *ifA = dynamic_cast<A *>(p);
	if (ifA != NULL)
	{
		std::cout << "It's A class ptr" << std::endl;
		return ;
	}
	B *ifB = dynamic_cast<B *>(p);
	if (ifB != NULL)
	{
		std::cout << "It's B class ptr" << std::endl;
		return ;
	}
	C *ifC = dynamic_cast<C *>(p);
	if (ifC != NULL)
	{
		std::cout << "It's C class ptr" << std::endl;
		return ;
	}
}

void identify(Base & p)
{
	A *ifA = dynamic_cast<A *>(&p);
	if (ifA != NULL)
	{
		std::cout << "It's A class ref" << std::endl;
		return ;
	}
	B *ifB = dynamic_cast<B *>(&p);
	if (ifB != NULL)
	{
		std::cout << "It's B class ref" << std::endl;
		return ;
	}
	C *ifC = dynamic_cast<C *>(&p);
	if (ifC != NULL)
	{
		std::cout << "It's C class ref" << std::endl;
		return ;
	}
}

int main()
{
	Base * test = generate();
	identify(test);
	identify(*test);
	
	delete test;
	return (0);
}