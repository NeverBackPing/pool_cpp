#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, u_int grade): _name(name), _grade(grade)
{
	std::cout << "Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl;
}

std::string Bureaucrat::getter_name() const
{
	return (this->_name);
}

int Bureaucrat::getter_grade() const
{
	return (this->_grade);
}

int	Bureaucrat::GradeCheck(int grade)
{
	if (grade < 1)
		throw GradeTooLowException();
	if (grade > 150)
		throw GradeTooLowException();
	return (grade);
}


void Getinfo(Bureaucrat& employed)
{
	try
	{
		std::cout << "Name: " << employed.getter_name();
		std::cout << ", ";
		if (employed.GradeCheck(employed.getter_grade()) >= 1 &&
			employed.GradeCheck(employed.getter_grade()) <= 150)
		{
			std::cout << "Grade: " << employed.getter_grade();
			std::cout <<  std::endl;
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}
