#include "Pony.hpp"

static void ponyOnTheHeap()
{
	Pony *pinkiPie = new Pony("Pinki Pie", "light pink", "baking & party making");
	pinkiPie->sayHello();
	delete pinkiPie;
}

static void ponyOnTheStack()
{
	Pony rainbowDash("Rainbow Dash", "sky blue", "sport & reading");
	rainbowDash.sayHello();
}

int main()
{
	ponyOnTheHeap();
	std::cout << "I'm on the heap\n\n";
	ponyOnTheStack();
	std::cout << "I'm on the stack\n\n";
	return (0);
}
