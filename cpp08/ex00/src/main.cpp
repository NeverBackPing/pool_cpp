#include "../include/easyfind.hpp"

int main()
{

  std::map<int, std::string> book {{1, "Shining"}, {2,"Harry Potter"}, {3,"1984"}};

	try
	{
		std::cout << easyfind(book, 8) << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

}
