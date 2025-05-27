#include "AForm.hpp"

AForm::AForm(std::string document, int lvl_sign, int exe_sign):
isSigned(false), gradeToSign(lvl_sign), gradeToExecute(exe_sign), name(document)
{
}

AForm::~AForm()
{
}

AForm & AForm::operator=(AForm const &copy)
{
	(void)copy;
	return (*this);
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
	os << "The name Aform is ";
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
	if (emplyed.getter_grade() >= this->getter_grade_sign())
		this->isSigned = true;
	else
		throw Fl_exeception;
}
