# include "../includes/ScalarConverte.hpp"
# include "../includes/convert_util.hpp"


void	convert_char(const char *data)
{
	bool just_num = isParam((char *)data);
	if (just_num)
	{
		display_char((char *)data);
		return ;
	}
	if ()
	{

	}
	std::cout << "char: "<< data << std::endl;
}

void	ScalarConverte::convert(std::string data)
{
	const char	*tmp_char = data.c_str();
	int			tmp_int = std::atoi(data.c_str());

	convert_char(tmp_char);
	std::cout << "int: "<< tmp_int << std::endl;
}
