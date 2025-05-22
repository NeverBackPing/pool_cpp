#include "Form.hpp"

Form::Form(std::string document, unsigned int lvl_sign, unsigned int exe_sign): 
sign(false), grade_sign(lvl_sign), grade_exec(exe_sign)
{
}

Form::~Form()
{
    std::cout << "Destructor called" << std::endl;
}

unsigned int	Form::getter_grade_sign() const
{
    return (this->grade_sign);
}

unsigned int	Form::getter_grade_exec() const
{
    return (this->grade_exec);
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

