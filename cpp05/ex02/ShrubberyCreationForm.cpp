#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Home", 145, 137), _target("Home")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm(target, 145, 137), _target(target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

std::string ShrubberyCreationForm::GetTaget()
{
	return (this->_target);
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	(void) copy;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (!this->isSigned)
			throw NoSign;
		if ((executor.getter_grade() > 145) || executor.getter_grade() > 137)
		{
			throw this->Fl_exeception;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return ;
	}

	std::string filename = this->_target + "_shrubbery.txt";

	std::ofstream FileTree(filename.c_str());

	FileTree <<  "          oxoxoo    ooxoo " << std::endl;
	FileTree <<  "        ooxoxo oo  oxoxooo " << std::endl;
	FileTree <<  "        oooo xxoxoo ooo ooox " << std::endl;
	FileTree <<  "        oxo o oxoxo  xoxxoxo " << std::endl;
	FileTree <<  "        oxo xooxoooo o ooo " << std::endl;
	FileTree <<  "           ooo\\oo\\  /o /o " << std::endl;
	FileTree <<  "               \\  \\/  / " << std::endl;
	FileTree <<  "                |   _/ " << std::endl;
	FileTree <<  "                |  | " << std::endl;
	FileTree <<  "                |  | " << std::endl;
	FileTree <<  "                |  | " << std::endl;
	FileTree <<  "                |  | " << std::endl;
	FileTree <<  "            _D_/____\\___" << std::endl;

	FileTree.close();
}
