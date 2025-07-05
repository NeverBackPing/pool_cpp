#include "AForm.hpp"

AForm::AForm():
isSigned(false), gradeToSign(120), gradeToExecute(120), name("Tax")
{
}

AForm::AForm(std::string document, int lvl_sign, int exe_sign):
isSigned(false), gradeToSign(lvl_sign), gradeToExecute(exe_sign), name(document)
{
	if (lvl_sign < 1 || exe_sign < 1)
        throw GradeTooHighException();
    else if (lvl_sign > 150 || exe_sign > 150)
        throw GradeTooLowException();
}

AForm::~AForm()
{

}

int	AForm::getter_grade_sign() const
{
	return (this->gradeToSign);
}

int	AForm::getter_grade_exec() const
{
	return (this->gradeToExecute);
}

bool	AForm::getIsSigned() const
{
	return (this->isSigned);
}

std::string	AForm::getter_name() const
{
	return (this->name);
}

std::ostream& operator<<(std::ostream& os, const AForm& obj)
{
	os << obj.getter_name() << ", form is signed: ";
	if (obj.getIsSigned())
		os << "true";
	else
		os << "false";
	os << ", grade to sign: " << obj.getter_grade_sign();
	os << ", grade to execute: " << obj.getter_grade_exec();
	os << ".";
	return (os);
}

void  AForm::beSigned(Bureaucrat& emplyed)
{
	if (emplyed.GetSignStatus())
		throw AForm::isAlreadySigned();
	else if (emplyed.getter_grade() <= this->getter_grade_sign())
	{
    	this->isSigned = true;
		emplyed.SetterSign(true);
	}
	else
   		throw GradeTooLowException();
}
