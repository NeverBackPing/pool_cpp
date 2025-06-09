#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Home", 145, 137), _target("Home")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm(target, 145, 137), _target(target)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

std::string PresidentialPardonForm::GetTaget() const
{
	return (this->_target);
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	(void) copy;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
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

	std::cout << "Your " << this->GetTaget() << " pardoned by Zaphod Beeblebrox." << std::endl;

}
