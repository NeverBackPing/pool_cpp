#include "Form.hpp"

Form::Form(std::string document, int lvl_sign, int exe_sign):
isSigned(false), gradeToSign(lvl_sign), gradeToExecute(exe_sign), name(document)
{
}

Form::~Form()
{

}

int	Form::getter_grade_sign() const
{
    return (this->gradeToSign);
}

int	Form::getter_grade_exec() const
{
    return (this->gradeToExecute);
}

bool	Form::getIsSigned()
{
    return (this->isSigned);
}

std::string	Form::getter_name() const
{
    return (this->name);
}

std::ostream& operator<<(std::ostream& os, const Form& obj)
{
    os << "The name form is ";
    os << obj.getter_name();
    os << " you need ";
    os << obj.getter_grade_sign();
    os << " for signed and ";
    os << obj.getter_grade_exec();
    os << " for execute";
    return (os);
}

void  Form::beSigned(Bureaucrat& emplyed)
{
    // if (_isSigned)
        //throw isAlreadySigned();
    if (emplyed.getter_grade() >= this->getter_grade_sign())
        this->isSigned = true;
    else
        throw Fl_exeception;
}
