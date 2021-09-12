#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "wrong args\n";
		return(1);
	}
	else
	{
		std::ifstream input(av[1]);
		std::string s1(av[2]);
		std::string s2(av[3]);

		if (input.is_open())
		{
			std::ofstream output(std::string(av[1]) + ".replace");
			if (output.is_open())
			{
				std::string line;
				size_t find;
				while (std::getline(input, line))
				{
					while ((find = line.find(s1)) != std::string::npos)
						line.replace(find, s1.length(), s2);
					output << line;
					if (!input.eof())
						output << std::endl;
				}
				input.close();
				output.close();
			}
			else
				std::cout << "cannot create the file\n";
			input.close();
		}
		else
			std::cout << "cannot open the file\n";
	}
	return (0);
}
