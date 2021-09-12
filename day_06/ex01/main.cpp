# include <iostream>
# include <math.h>

struct Data
{
	std::string string;
	int			number;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main ()
{
	Data * inData = new Data;
	inData->string = "test";
	inData->number = 1;
	uintptr_t temp = serialize(inData);
	Data * outData = deserialize(temp);

	std::cout << inData << std::endl;
	std::cout << outData << std::endl << std::endl;

	std::cout << inData->string << std::endl;
	std::cout << outData->string << std::endl << std::endl;
	std::cout << inData->number << std::endl;
	std::cout << outData->number << std::endl;

	delete outData;
	return (0);
}
