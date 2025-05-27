#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name,  int grade): _name(name), _grade(grade)
{
}

Bureaucrat::~Bureaucrat()
{
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

void	Bureaucrat::executeForm(AForm const & form) const
{
	try
	{
		if (form.getIsSigned())
			form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
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
			std::cout << "bureaucrat grade " << employed.getter_grade();
			std::cout <<  std::endl;
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}

void	Bureaucrat::signForm(AForm& doc)
{
	try
	{
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
