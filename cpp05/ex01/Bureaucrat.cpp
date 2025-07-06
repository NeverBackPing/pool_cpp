#include "Bureaucrat.hpp"
# include "Form.hpp"

Bureaucrat::Bureaucrat(): _name("Bob"), _grade(125)
{
	//std::cout << "Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	std::cout << "Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	//std::cout << "Destructor called" << std::endl;
}

std::string Bureaucrat::getter_name() const
{
	return (this->_name);
}

int Bureaucrat::getter_grade() const
{
	return (this->_grade);
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &copy)
{
	 if (this != &copy)
        this->_grade = copy.getter_grade();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << obj.getter_name() << ", bureaucrat grade " << obj.getter_grade() << ".";
	return (os);
}

void Bureaucrat::incrementGrade()
{
	if (_grade <= 1)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (_grade >= 150)
		throw GradeTooLowException();
	_grade++;
}

bool	Bureaucrat::GetSignStatus()
{
	return (this->sign);
}

void	Bureaucrat::SetterSign(bool status)
{
	this->sign = status;
}

void Bureaucrat::signForm(Form& doc)
{
	try
	{
		if (doc.getter_grade_sign() < this->getter_grade())
			throw GradeTooLowException();
		doc.beSigned(*this);
		std::cout << this->getter_name() << " signed " << doc.getter_name() << std::endl;

	}
	catch (std::exception &e)
	{
		std::cout << this->getter_name() << " couldn’t sign ";
		std::cout << doc.getter_name();
		std::cout << " because " << e.what() << std::endl;
	}
}
