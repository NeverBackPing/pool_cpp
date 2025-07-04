#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Bob"), _grade(125)
{
	//std::cout << "Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	//std::cout << "Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	//std::cout << "Destructor called" << std::endl;
}

std::string Bureaucrat::getter_name() const
{
	return (this->_name);
}

void	Bureaucrat::setter_grade(int edit)
{
	this->_grade = edit;
}

int Bureaucrat::getter_grade() const
{
	return (this->_grade);
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &copy)
{
	this->_grade = copy.getter_grade();
	this->_name = copy.getter_name();
	return (*this);
}

std::string	check_info(const Bureaucrat& obj)
{
	try
	{
		if (obj.getter_grade() > 150)
			throw obj.Gl_exeception;
		else if (obj.getter_grade() < 1)
			throw obj.Gh_exeception;
	}
	catch (std::exception& e)
	{
		return (e.what());
	}
	std::stringstream tmp;
	std::string tmp_string;

	tmp << obj.getter_grade();
	tmp >> tmp_string;
	return (tmp_string);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << "Name: ";
	os << obj.getter_name();
	os << ", ";
	os << "bureaucrat grade: ";
	os <<  check_info(obj);
	os <<  std::endl;
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

void Bureaucrat::signForm(Form& doc)
{
	try
	{
		if (doc.getter_grade_sign() < this->getter_grade())
			throw GradeTooLowException();
		doc.beSigned(*this);
	}
	catch (std::exception &e)
	{
		std::cout << this->getter_name() << " couldn’t sign ";
		std::cout << doc.getter_name();
		std::cout << " because " << e.what() << std::endl;
	}
}
