#pragma once

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"

class ShrubberyCreationForm: public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();

        void execute(void);
        std::string GetTaget();
};
