# include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(): AForm("Home", 72, 45), _target("Home")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Home", 72, 45), _target(target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

std::string RobotomyRequestForm::GetTaget() const
{
	return (this->_target);
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	(void) copy;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int random;

	try
	{
		if (!this->isSigned)
			throw NoSign;
		if (executor.getter_grade() > this->getter_grade_exec())
		{
			throw this->Fl_exeception;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return ;
	}

	srand (time(NULL));
	random = rand() % 2 + 1;

	if (random % 2 == 0)
		std::cout << "\033[32mSuccessful transmission for " << this->GetTaget() << "\033[0m" << std::endl;
	else
		std::cout << "\033[31mFail transmission for " << this->GetTaget() << "\033[0m" << std::endl;

}
