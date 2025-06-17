# include "../includes/ScalarConverte.hpp"
# include "../includes/convert_util.hpp"

template<int d>
std::ostream& fixed(std::ostream& os)
{
	os.setf(std::ios_base::fixed, std::ios_base::floatfield);
	os.precision(d);
	return (os);
}

void	convert_char(std::string data)
{
	const char	*tmp_char = data.c_str();

	bool just_num = isParam((char *)tmp_char);
	if (just_num)
	{
		display_char((char *)tmp_char);
		return ;
	}
	if (regex_float((char *)tmp_char))
	{
		display_char((char *)tmp_char);
		return ;
	}
	std::cout << "char: impossible" << std::endl;
}

void	convert_int(std::string data)
{
	int	tmp_int = std::atoi(data.c_str());
	const char	*tmp_char = data.c_str();

	if (regex_float((char *)tmp_char))
	{
		std::cout << "int: "<< tmp_int << std::endl;
		return ;
	}
	std::cout << "int: impossible" << std::endl;
}

void	convert_float(std::string data)
{
	float tmp_float = 0.0;
	std::stringstream str_stream;
	str_stream << data;
	str_stream >> tmp_float;

	const char	*tmp_char = data.c_str();
	if (regex_float((char *)tmp_char))
	{
		std::cout << "float: "<< fixed<1> << tmp_float << "f" << std::endl;
		return ;
	}
	std::cout << "float: nanf" << std::endl;
}

void	convert_double(std::string data)
{
	float tmp_double = std::atof(data.c_str());

	const char	*tmp_char = data.c_str();
	if (regex_float((char *)tmp_char))
	{
		std::cout << "double: " << fixed<1> << tmp_double << std::endl;
		return ;
	}
	std::cout << "double: nan" << std::endl;
}

void	ScalarConverte::convert(std::string data)
{
	convert_char(data);
	convert_int(data);
	convert_float(data);
	convert_double(data);
}
