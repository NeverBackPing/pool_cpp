#include "AForm.hpp"

AForm::AForm():
isSigned(false), gradeToSign(120), gradeToExecute(120), name("Tax")
{
}

AForm::AForm(std::string document, int lvl_sign, int exe_sign):
isSigned(false), gradeToSign(lvl_sign), gradeToExecute(exe_sign), name(document)
{
}

AForm::~AForm()
{

}

void	AForm::setter_remove_sign(bool remove_sihn)
{
	this->isSigned = remove_sihn;
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
	os << "The name Form is ";
	os << obj.getter_name();
	os << " you need ";
	os << obj.getter_grade_sign();
	os << " for signed and ";
	os << obj.getter_grade_exec();
	os << " for execute";
	return (os);
}

void  AForm::beSigned(Bureaucrat& emplyed)
{
	if (this->isSigned)
		throw isAlreadySigned();
	if (emplyed.getter_grade() <= this->getter_grade_sign())
		this->isSigned = true;
	else
		throw Fl_exeception;
}
