#pragma once

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		bool				isSigned;
		const int			gradeToSign;
		const int			gradeToExecute;
		const std::string	name;

	public:
		// Form Canonique
		Form();
		Form(std::string document, int lvl_sign, int exe_sign);
		~Form();

		//Method Getter
		void		beSigned(Bureaucrat& emplyed);
		int			getter_grade_sign() const;
		int			getter_grade_exec() const;
		bool		getIsSigned();
		std::string	getter_name() const;

		// Methode setter
		void		setter_remove_sign(bool remove_sihn);

		// Exception
		class GradeTooHighException: public std::exception
		{
			virtual const char * what() const throw()
			{
				return ("grade is too high!");
			}
		} Fh_exeception;

		class GradeTooLowException: public std::exception
		{
			virtual const char * what() const throw()
			{
				return ("Grade is too low!");
			}
		} Fl_exeception;

		class isAlreadySigned : public std::exception
		{
			virtual const char * what() const throw()
			{
				return ("Is already signed");
			}
		}Sign_exeception;
};

std::ostream& operator<<(std::ostream& os, const Form& obj);
