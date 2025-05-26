#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

std::string ShrubberyCreationForm::GetTaget()
{
    return (this->target);
}

void ShrubberyCreationForm::execute(void)
{
    std::ofstream FileTree("tree_shrubbery.txt");

    FileTree  <<  "          oxoxoo    ooxoo " << std::endl;
    FileTree  <<  "        ooxoxo oo  oxoxooo " << std::endl;
    FileTree  <<  "        oooo xxoxoo ooo ooox " << std::endl;
    FileTree  <<  "        oxo o oxoxo  xoxxoxo " << std::endl;
    FileTree  <<  "        oxo xooxoooo o ooo " << std::endl;
    FileTree  <<  "            ooo\oo\  /o/o " << std::endl;
    FileTree  <<  "                \  \/ / " << std::endl;
    FileTree  <<  "                |   / " << std::endl;
    FileTree  <<  "                |  | " << std::endl;
    FileTree  <<  "                | D| " << std::endl;
    FileTree  <<  "                |  | " << std::endl;
    FileTree  <<  "                |  | " << std::endl;
    FileTree  <<  "         ______/____\_" << std::endl;

    FileTree.close();
}
