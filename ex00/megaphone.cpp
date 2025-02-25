#include <iostream>
#include <cctype>
using namespace std;


void	ft_megaphone(char **str)
{
	int		i;
	int		j;
	char	c;

	i = 1;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (isalpha(str[i][j]))
			{
				c = toupper(str[i][j]);
				cout << c;
			}
			else
				cout << str[i][j];
			j++;

		}
		cout << " ";
		i++;
	}
	cout << "\n";
}


int	main(int ac, char **av)
{
	if (ac == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (-1);
	}
	ft_megaphone(av);
	return (0);
}
