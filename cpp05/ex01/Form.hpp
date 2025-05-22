#pragma once

# include <iostream>

class Form
{
    private:
        bool    sign;
        const unsigned int grade_sign;
        const unsigned int grade_exec;
        const std::string name;

    public:
        Form(std::string document, unsigned int lvl_sign, unsigned int exe_sign);
        ~Form();

        void            beSigned();
        unsigned int	getter_grade_sign() const;
        unsigned int	getter_grade_exec() const;
        std::string     getter_name() const;
        
    
    class GradeTooHighException: public std::exception
    {
        virtual const char * what() const throw()
        {
            return ("The grade so High");
        }
    } Fh_exeception;
    
    class GradeTooLowException: public std::exception
    {
        virtual const char * what() const throw()
        {
            return ("The grade so low");
        }
    } Fl_exeception;
};

std::ostream& operator<<(std::ostream& os, const Form& obj);