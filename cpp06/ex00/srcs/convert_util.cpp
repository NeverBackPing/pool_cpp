# include "../includes/convert_util.hpp"

void display_char(char *data)
{
	char c;
	int step = 2;
	int ascii = std::atoi(data);
	if (ascii >= 33 && ascii <= 126)
	{
		c = ascii;
		step = 1;
	}
	switch (step)
	{
		case 1:
			std::cout << "char: '"<< c << "'" << std::endl;
			break;
		case 2:
			std::cout << "char: Can't display " << std::endl;
			break;
	}
}

std::string convertToString(char* a, int size)
{
	int i;
	std::string s = "";

	for (i = 0; i < size; i++)
		s = s + a[i];

	return (s);
}

bool	isParam(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (false);
		i++;
	}
	return (true);
}
