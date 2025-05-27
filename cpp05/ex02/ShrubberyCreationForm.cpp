#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm & copy)
{
	*this = copy;
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

void ShrubberyCreationForm::execute(void)
{
	if ((this->getter_grade_sign() < 145) || (this->getter_grade_exec() < 137))
	{
		throw Fl_exeception;
	}

	std::ofstream FileTree(this->_target + "_shrubbery.txt");

	FileTree  <<  "          oxoxoo    ooxoo " << std::endl;
	FileTree  <<  "        ooxoxo oo  oxoxooo " << std::endl;
	FileTree  <<  "        oooo xxoxoo ooo ooox " << std::endl;
	FileTree  <<  "        oxo o oxoxo  xoxxoxo " << std::endl;
	FileTree  <<  "        oxo xooxoooo o ooo " << std::endl;
	FileTree  <<  "           ooo\oo\  /o /o " << std::endl;
	FileTree  <<  "               \  \/  / " << std::endl;
	FileTree  <<  "                |   _/ " << std::endl;
	FileTree  <<  "                |  | " << std::endl;
	FileTree  <<  "                |  | " << std::endl;
	FileTree  <<  "                |  | " << std::endl;
	FileTree  <<  "                |  | " << std::endl;
	FileTree  <<  "            _D_/____\___" << std::endl;

	FileTree.close();
}
